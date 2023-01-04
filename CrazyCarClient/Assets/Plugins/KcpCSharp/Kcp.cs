using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace KcpCSharp {
    /**
    *  KCP - A Better ARQ Protocol Implementation
    *  skywind3000 (at) gmail.com, 2010-2011
    *  Features:
    *  + Average RTT reduce 30% - 40% vs traditional ARQ like tcp.
    *  + Maximum RTT reduce three times vs tcp.
    *  + Lightweight, distributed as a single source file.
    */
    public class Kcp {

        public const int IKCP_RTO_NDL = 30;  // no delay min rto
        public const int IKCP_RTO_MIN = 100; // normal min rto
        public const int IKCP_RTO_DEF = 200;
        public const int IKCP_RTO_MAX = 60000;
        public const int IKCP_CMD_PUSH = 81; // cmd: push data
        public const int IKCP_CMD_ACK = 82; // cmd: ack
        public const int IKCP_CMD_WASK = 83; // cmd: window probe (ask)
        public const int IKCP_CMD_WINS = 84; // cmd: window size (tell)
        public const int IKCP_ASK_SEND = 1;  // need to send IKCP_CMD_WASK
        public const int IKCP_ASK_TELL = 2;  // need to send IKCP_CMD_WINS
        public const int IKCP_WND_SND = 32;
        public const int IKCP_WND_RCV = 32;
        public const int IKCP_MTU_DEF = 1400;
        public const int IKCP_ACK_FAST = 3;
        public const int IKCP_INTERVAL = 100;
        public const int IKCP_OVERHEAD = 24;
        public const int IKCP_DEADLINK = 10;
        public const int IKCP_THRESH_INIT = 2;
        public const int IKCP_THRESH_MIN = 2;
        public const int IKCP_PROBE_INIT = 7000;   // 7 secs to probe window size
        public const int IKCP_PROBE_LIMIT = 120000; // up to 120 secs to probe window

        private int conv;
        private int mtu;
        private int mss;
        private int state;
        private int snd_una;
        private int snd_nxt;
        private int rcv_nxt;
        private int ts_recent;
        private int ts_lastack;
        private int ssthresh;
        private int rx_rttval;
        private int rx_srtt;
        private int rx_rto;
        private int rx_minrto;
        private int snd_wnd;
        private int rcv_wnd;
        private int rmt_wnd;
        private int cwnd;
        private int probe;
        private int current;
        private int interval;
        private int ts_flush;
        private int xmit;
        private int nodelay;
        private int updated;
        private int ts_probe;
        private int probe_wait;
        private int dead_link;
        private int incr;
        private List<Segment> snd_queue = new List<Segment>();
        private List<Segment> rcv_queue = new List<Segment>();
        private List<Segment> snd_buf = new List<Segment>();
        private List<Segment> rcv_buf = new List<Segment>();
        private List<int> acklist = new List<int>();
        private ByteBuf buffer;
        private int fastresend;
        private int nocwnd;
        private bool stream;
        private int logmask;
        private Output output;
        private Object user;
        private int nextUpdate;//the next update time.

        private static int _ibound_(int lower, int middle, int upper) {
            return Math.Min(Math.Max(lower, middle), upper);
        }

        private static int _itimediff(int later, int earlier) {
            return later - earlier;
        }

        /**
         * SEGMENT
         */
        class Segment {

            public int conv = 0;
            public byte cmd = 0;
            public int frg = 0;
            public int wnd = 0;
            public int ts = 0;
            public int sn = 0;
            public int una = 0;
            public int resendts = 0;
            public int rto = 0;
            public int fastack = 0;
            public int xmit = 0;
            public ByteBuf data;

            public Segment(int size) {
                if (size > 0) {
                    this.data = new ByteBuf(size);
                }
            }

            /**
             * encode a segment into buffer
             *
             * @param buf
             * @param offset
             * @return
             */
            public int Encode(ByteBuf buf) {
                int off = buf.WriterIndex();
                buf.WriteIntLE(conv);
                buf.WriteByte(cmd);
                buf.WriteByte((byte)frg);
                buf.WriteShortLE((short)wnd);
                buf.WriteIntLE(ts);
                buf.WriteIntLE(sn);
                buf.WriteIntLE(una);
                buf.WriteIntLE(data == null ? 0 : data.ReadableBytes());
                return buf.WriterIndex() - off;
            }
        }

        /**
         * create a new kcpcb
         *
         * @param conv
         * @param output
         * @param user
         */
        public Kcp(int conv, Output output, Object user) {
            this.conv = conv;
            snd_wnd = IKCP_WND_SND;
            rcv_wnd = IKCP_WND_RCV;
            rmt_wnd = IKCP_WND_RCV;
            mtu = IKCP_MTU_DEF;
            mss = mtu - IKCP_OVERHEAD;
            rx_rto = IKCP_RTO_DEF;
            rx_minrto = IKCP_RTO_MIN;
            interval = IKCP_INTERVAL;
            ts_flush = IKCP_INTERVAL;
            ssthresh = IKCP_THRESH_INIT;
            dead_link = IKCP_DEADLINK;
            rcv_nxt = 0;
            buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
            this.output = output;
            this.user = user;
        }

        /**
         * check the size of next message in the recv queue
         *
         * @return
         */
        public int PeekSize() {
            if (rcv_queue.Count <= 0) {
                return -1;
            }
            Segment seq = rcv_queue.First();
            if (seq.frg == 0) {
                return seq.data.ReadableBytes();
            }
            if (rcv_queue.Count < seq.frg + 1) {
                return -1;
            }
            int length = 0;
            for (int i = 0; i < rcv_queue.Count; i++) {
                Segment item = rcv_queue[i];
                length += item.data.ReadableBytes();
                if (item.frg == 0) {
                    break;
                }
            }
            return length;
        }

        /**
         * user/upper level recv: returns size, returns below zero for EAGAIN
         *
         * @param buffer
         * @return
         */
        public int Receive(ByteBuf buffer) {
            if (rcv_queue.Count <= 0) {
                return -1;
            }
            int peekSize = PeekSize();
            if (peekSize < 0) {
                return -2;
            }
            bool recover = rcv_queue.Count >= rcv_wnd;
            // merge fragment.
            int c = 0;
            int len = 0;
            for (int i = 0; i < rcv_queue.Count; i++) {
                Segment seg = rcv_queue[i];
                len += seg.data.ReadableBytes();
                buffer.WriteBytes(seg.data);
                c++;
                if (seg.frg == 0) {
                    break;
                }
            }
            if (c > 0)
                rcv_queue.RemoveRange(0, c);
            if (len != peekSize) {
                throw new Exception("数据异常.");
            }
            // move available data from rcv_buf -> rcv_queue
            c = 0;
            for (int i = 0; i < rcv_buf.Count; i++) {
                Segment seg = rcv_buf[i];
                if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd) {
                    rcv_queue.Add(seg);
                    rcv_nxt++;
                    c++;
                } else {
                    break;
                }
            }
            if (c > 0)
                rcv_buf.RemoveRange(0, c);
            // fast recover
            if (rcv_queue.Count < rcv_wnd && recover) {
                // ready to send back IKCP_CMD_WINS in ikcp_flush
                // tell remote my window size
                probe |= IKCP_ASK_TELL;
            }
            return len;
        }

        /**
         * user/upper level send, returns below zero for error
         *
         * @param buffer
         * @return
         */
        public int Send(ByteBuf buffer) {
            if (buffer.ReadableBytes() == 0) {
                return -1;
            }
            // append to previous segment in streaming mode (if possible)
            if (this.stream && this.snd_queue.Count > 0) {
                Segment seg = snd_queue.Last();
                if (seg.data != null && seg.data.ReadableBytes() < mss) {
                    int capacity = mss - seg.data.ReadableBytes();
                    int extend = (buffer.ReadableBytes() < capacity) ? buffer.ReadableBytes() : capacity;
                    seg.data.WriteBytes(buffer, extend);
                    if (buffer.ReadableBytes() == 0) {
                        return 0;
                    }
                }
            }
            int count;
            if (buffer.ReadableBytes() <= mss) {
                count = 1;
            } else {
                count = (buffer.ReadableBytes() + mss - 1) / mss;
            }
            if (count > 255) {
                return -2;
            }
            if (count == 0) {
                count = 1;
            }
            //fragment
            for (int i = 0; i < count; i++) {
                int size = buffer.ReadableBytes() > mss ? mss : buffer.ReadableBytes();
                Segment seg = new Segment(size);
                seg.data.WriteBytes(buffer, size);
                seg.frg = this.stream ? 0 : count - i - 1;
                snd_queue.Add(seg);
            }
            return 0;
        }

        /**
         * update ack.
         *
         * @param rtt
         */
        private void Update_ack(int rtt) {
            if (rx_srtt == 0) {
                rx_srtt = rtt;
                rx_rttval = rtt / 2;
            } else {
                int delta = rtt - rx_srtt;
                if (delta < 0) {
                    delta = -delta;
                }
                rx_rttval = (3 * rx_rttval + delta) / 4;
                rx_srtt = (7 * rx_srtt + rtt) / 8;
                if (rx_srtt < 1) {
                    rx_srtt = 1;
                }
            }
            int rto = rx_srtt + Math.Max(interval, 4 * rx_rttval);
            rx_rto = _ibound_(rx_minrto, rto, IKCP_RTO_MAX);
        }

        private void Shrink_buf() {
            if (snd_buf.Count > 0) {
                snd_una = snd_buf.First().sn;
            } else {
                snd_una = snd_nxt;
            }
        }

        private void Parse_ack(int sn) {
            if (_itimediff(sn, snd_una) < 0 || _itimediff(sn, snd_nxt) >= 0) {
                return;
            }
            for (int i = 0; i < snd_buf.Count; i++) {
                Segment seg = snd_buf[i];
                if (sn == seg.sn) {
                    snd_buf.RemoveAt(i);
                    break;
                }
                if (_itimediff(sn, seg.sn) < 0) {
                    break;
                }
            }
        }

        private void Parse_una(int una) {
            int c = 0;
            for (int i = 0; i < snd_buf.Count; i++) {
                Segment seg = snd_buf[i];
                if (_itimediff(una, seg.sn) > 0) {
                    c++;
                } else {
                    break;
                }
            }
            if (c > 0)
                snd_buf.RemoveRange(0, c);
        }

        private void Parse_fastack(int sn) {
            if (_itimediff(sn, snd_una) < 0 || _itimediff(sn, snd_nxt) >= 0) {
                return;
            }
            for (int i = 0; i < snd_buf.Count; i++) {
                Segment seg = snd_buf[i];
                if (_itimediff(sn, seg.sn) < 0) {
                    break;
                } else if (sn != seg.sn) {
                    seg.fastack++;
                }
            }
        }

        /**
         * ack append
         *
         * @param sn
         * @param ts
         */
        private void Ack_push(int sn, int ts) {
            acklist.Add(sn);
            acklist.Add(ts);
        }

        private void Parse_data(Segment newseg) {
            int sn = newseg.sn;
            if (_itimediff(sn, rcv_nxt + rcv_wnd) >= 0 || _itimediff(sn, rcv_nxt) < 0) {
                return;
            }
            int n = rcv_buf.Count - 1;
            int temp = -1;
            bool repeat = false;
            for (int i = n; i >= 0; i--) {
                Segment seg = rcv_buf[i];
                if (seg.sn == sn) {
                    repeat = true;
                    break;
                }
                if (_itimediff(sn, seg.sn) > 0) {
                    temp = i;
                    break;
                }
            }
            if (!repeat) {
                if (temp == -1) {
                    rcv_buf.Insert(0, newseg);
                } else {
                    rcv_buf.Insert(temp + 1, newseg);
                }
            }
            // move available data from rcv_buf -> rcv_queue
            int c = 0;
            for (int i = 0; i < rcv_buf.Count; i++) {
                Segment seg = rcv_buf[i];
                if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd) {
                    rcv_queue.Add(seg);
                    rcv_nxt++;
                    c++;
                } else {
                    break;
                }
            }
            if (c > 0) {
                rcv_buf.RemoveRange(0, c);
            }
        }

        /**
         *
         * when you received a low level packet (eg. UDP packet), call it
         *
         * @param data
         * @return
         */
        public int Input(ByteBuf data) {
            int una_temp = snd_una;
            int flag = 0, maxack = 0;
            if (data == null || data.ReadableBytes() < IKCP_OVERHEAD) {
                return -1;
            }
            while (true) {
                bool readed = false;
                int ts;
                int sn;
                int len;
                int una;
                int conv_;
                int wnd;
                byte cmd;
                byte frg;
                if (data.ReadableBytes() < IKCP_OVERHEAD) {
                    break;
                }
                conv_ = data.ReadIntLE();
                if (this.conv != conv_) {
                    return -1;
                }
                cmd = data.ReadByte();
                frg = data.ReadByte();
                wnd = data.ReadShortLE();
                ts = data.ReadIntLE();
                sn = data.ReadIntLE();
                una = data.ReadIntLE();
                len = data.ReadIntLE();
                if (data.ReadableBytes() < len) {
                    return -2;
                }
                switch ((int)cmd) {
                    case IKCP_CMD_PUSH:
                    case IKCP_CMD_ACK:
                    case IKCP_CMD_WASK:
                    case IKCP_CMD_WINS:
                        break;
                    default:
                        return -3;
                }
                rmt_wnd = wnd & 0x0000ffff;
                Parse_una(una);
                Shrink_buf();
                switch (cmd) {
                    case IKCP_CMD_ACK:
                        if (_itimediff(current, ts) >= 0) {
                            Update_ack(_itimediff(current, ts));
                        }
                        Parse_ack(sn);
                        Shrink_buf();
                        if (flag == 0) {
                            flag = 1;
                            maxack = sn;
                        } else if (_itimediff(sn, maxack) > 0) {
                            maxack = sn;
                        }
                        break;
                    case IKCP_CMD_PUSH:
                        if (_itimediff(sn, rcv_nxt + rcv_wnd) < 0) {
                            Ack_push(sn, ts);
                            if (_itimediff(sn, rcv_nxt) >= 0) {
                                Segment seg = new Segment(len);
                                seg.conv = conv_;
                                seg.cmd = cmd;
                                seg.frg = frg & 0x000000ff;
                                seg.wnd = wnd;
                                seg.ts = ts;
                                seg.sn = sn;
                                seg.una = una;
                                if (len > 0) {
                                    seg.data.WriteBytes(data, len);
                                    readed = true;
                                }
                                Parse_data(seg);
                            }
                        }
                        break;
                    case IKCP_CMD_WASK:
                        // ready to send back IKCP_CMD_WINS in Ikcp_flush
                        // tell remote my window size
                        probe |= IKCP_ASK_TELL;
                        break;
                    case IKCP_CMD_WINS:
                        // do nothing
                        break;
                    default:
                        return -3;
                }
                if (!readed) {
                    data.SkipBytes(len);
                }
            }
            if (flag != 0) {
                Parse_fastack(maxack);
            }
            if (_itimediff(snd_una, una_temp) > 0) {
                if (this.cwnd < this.rmt_wnd) {
                    if (this.cwnd < this.ssthresh) {
                        this.cwnd++;
                        this.incr += mss;
                    } else {
                        if (this.incr < mss) {
                            this.incr = mss;
                        }
                        this.incr += (mss * mss) / this.incr + (mss / 16);
                        if ((this.cwnd + 1) * mss <= this.incr) {
                            this.cwnd++;
                        }
                    }
                    if (this.cwnd > this.rmt_wnd) {
                        this.cwnd = this.rmt_wnd;
                        this.incr = this.rmt_wnd * mss;
                    }
                }
            }
            return 0;
        }

        private int wnd_unused() {
            if (rcv_queue.Count < rcv_wnd) {
                return rcv_wnd - rcv_queue.Count;
            }
            return 0;
        }

        /**
         * flush pending data
         */
        private void Flush() {
            int cur = current;
            int change = 0;
            int lost = 0;
            if (updated == 0) {
                return;
            }
            Segment seg = new Segment(0);
            seg.conv = conv;
            seg.cmd = IKCP_CMD_ACK;
            seg.wnd = wnd_unused();
            seg.una = rcv_nxt;
            // flush acknowledges
            int c = acklist.Count / 2;
            for (int i = 0; i < c; i++) {
                if (buffer.ReadableBytes() + IKCP_OVERHEAD > mtu) {
                    this.output.output(buffer, this, user);
                    buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
                }
                seg.sn = acklist[i * 2 + 0];
                seg.ts = acklist[i * 2 + 1];
                seg.Encode(buffer);
            }
            acklist.Clear();
            // probe window size (if remote window size equals zero)
            if (rmt_wnd == 0) {
                if (probe_wait == 0) {
                    probe_wait = IKCP_PROBE_INIT;
                    ts_probe = current + probe_wait;
                } else if (_itimediff(current, ts_probe) >= 0) {
                    if (probe_wait < IKCP_PROBE_INIT) {
                        probe_wait = IKCP_PROBE_INIT;
                    }
                    probe_wait += probe_wait / 2;
                    if (probe_wait > IKCP_PROBE_LIMIT) {
                        probe_wait = IKCP_PROBE_LIMIT;
                    }
                    ts_probe = current + probe_wait;
                    probe |= IKCP_ASK_SEND;
                }
            } else {
                ts_probe = 0;
                probe_wait = 0;
            }
            // flush window probing commands
            if ((probe & IKCP_ASK_SEND) != 0) {
                seg.cmd = IKCP_CMD_WASK;
                if (buffer.ReadableBytes() + IKCP_OVERHEAD > mtu) {
                    this.output.output(buffer, this, user);
                    buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
                }
                seg.Encode(buffer);
            }
            // flush window probing commands
            if ((probe & IKCP_ASK_TELL) != 0) {
                seg.cmd = IKCP_CMD_WINS;
                if (buffer.ReadableBytes() + IKCP_OVERHEAD > mtu) {
                    this.output.output(buffer, this, user);
                    buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
                }
                seg.Encode(buffer);
            }
            probe = 0;
            // calculate window size
            int cwnd_temp = Math.Min(snd_wnd, rmt_wnd);
            if (nocwnd == 0) {
                cwnd_temp = Math.Min(cwnd, cwnd_temp);
            }
            // move data from snd_queue to snd_buf
            c = 0;
            for (int i = 0; i < snd_queue.Count; i++) {
                Segment item = snd_queue[i];
                if (_itimediff(snd_nxt, snd_una + cwnd_temp) >= 0) {
                    break;
                }
                Segment newseg = item;
                newseg.conv = conv;
                newseg.cmd = IKCP_CMD_PUSH;
                newseg.wnd = seg.wnd;
                newseg.ts = cur;
                newseg.sn = snd_nxt++;
                newseg.una = rcv_nxt;
                newseg.resendts = cur;
                newseg.rto = rx_rto;
                newseg.fastack = 0;
                newseg.xmit = 0;
                snd_buf.Add(newseg);
                c++;
            }
            if (c > 0) {
                snd_queue.RemoveRange(0, c);
            }
            // calculate resent
            int resent = (fastresend > 0) ? fastresend : int.MaxValue;
            int rtomin = (nodelay == 0) ? (rx_rto >> 3) : 0;
            // flush data segments
            for (int i = 0; i < snd_buf.Count; i++) {
                Segment segment = snd_buf[i];
                bool needsend = false;
                if (segment.xmit == 0) {
                    needsend = true;
                    segment.xmit++;
                    segment.rto = rx_rto;
                    segment.resendts = cur + segment.rto + rtomin;
                } else if (_itimediff(cur, segment.resendts) >= 0) {
                    needsend = true;
                    segment.xmit++;
                    xmit++;
                    if (nodelay == 0) {
                        segment.rto += rx_rto;
                    } else {
                        segment.rto += rx_rto / 2;
                    }
                    segment.resendts = cur + segment.rto;
                    lost = 1;
                } else if (segment.fastack >= resent) {
                    needsend = true;
                    segment.xmit++;
                    segment.fastack = 0;
                    segment.resendts = cur + segment.rto;
                    change++;
                }
                if (needsend) {
                    segment.ts = cur;
                    segment.wnd = seg.wnd;
                    segment.una = rcv_nxt;
                    int need = IKCP_OVERHEAD + segment.data.ReadableBytes();
                    if (buffer.ReadableBytes() + need > mtu) {
                        this.output.output(buffer, this, user);
                        buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
                    }
                    segment.Encode(buffer);
                    if (segment.data.ReadableBytes() > 0) {
                        buffer.WriteBytes(segment.data.Duplicate());
                    }
                    if (segment.xmit >= dead_link) {
                        state = -1;
                    }
                }
            }
            // flash remain segments
            if (buffer.ReadableBytes() > 0) {
                this.output.output(buffer, this, user);
                buffer = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
            }
            // update ssthresh
            if (change != 0) {
                int inflight = snd_nxt - snd_una;
                ssthresh = inflight / 2;
                if (ssthresh < IKCP_THRESH_MIN) {
                    ssthresh = IKCP_THRESH_MIN;
                }
                cwnd = ssthresh + resent;
                incr = cwnd * mss;
            }
            if (lost != 0) {
                ssthresh = cwnd / 2;
                if (ssthresh < IKCP_THRESH_MIN) {
                    ssthresh = IKCP_THRESH_MIN;
                }
                cwnd = 1;
                incr = mss;
            }
            if (cwnd < 1) {
                cwnd = 1;
                incr = mss;
            }
        }

        /**
         * update state (call it repeatedly, every 10ms-100ms), or you can ask
         * ikcp_check when to call it again (without ikcp_input/_send calling).
         *
         * @param current current timestamp in millisec.
         */
        public void Update(long current) {
            this.current = (int)current;
            if (updated == 0) {
                updated = 1;
                ts_flush = this.current;
            }
            int slap = _itimediff(this.current, ts_flush);
            if (slap >= 10000 || slap < -10000) {
                ts_flush = this.current;
                slap = 0;
            }
            if (slap >= 0) {
                ts_flush += interval;
                if (_itimediff(this.current, ts_flush) >= 0) {
                    ts_flush = this.current + interval;
                }
                Flush();
            }
        }

        /**
         * Determine when should you invoke ikcp_update: returns when you should
         * invoke ikcp_update in millisec, if there is no ikcp_input/_send calling.
         * you can call ikcp_update in that time, instead of call update repeatly.
         * Important to reduce unnacessary ikcp_update invoking. use it to schedule
         * ikcp_update (eg. implementing an epoll-like mechanism, or optimize
         * ikcp_update when handling massive kcp connections)
         *
         * @param current
         * @return
         */
        public int Check(long current) {
            int cur = (int)current;
            if (updated == 0) {
                return cur;
            }
            int ts_flush_temp = this.ts_flush;
            int tm_packet = 0x7fffffff;
            if (_itimediff(cur, ts_flush_temp) >= 10000 || _itimediff(cur, ts_flush_temp) < -10000) {
                ts_flush_temp = cur;
            }
            if (_itimediff(cur, ts_flush_temp) >= 0) {
                return cur;
            }
            int tm_flush = _itimediff(ts_flush_temp, cur);
            for (int i = 0; i < snd_buf.Count; i++) {
                Segment seg = snd_buf[i];
                int diff = _itimediff(seg.resendts, cur);
                if (diff <= 0) {
                    return cur;
                }
                if (diff < tm_packet) {
                    tm_packet = diff;
                }
            }
            int minimal = tm_packet < tm_flush ? tm_packet : tm_flush;
            if (minimal >= interval) {
                minimal = interval;
            }
            return cur + minimal;
        }

        /**
         * change MTU size, default is 1400
         *
         * @param mtu
         * @return
         */
        public int SetMtu(int mtu) {
            if (mtu < 50 || mtu < IKCP_OVERHEAD) {
                return -1;
            }
            ByteBuf buf = new ByteBuf((mtu + IKCP_OVERHEAD) * 3);
            this.mtu = mtu;
            mss = mtu - IKCP_OVERHEAD;
            this.buffer = buf;
            return 0;
        }

        /**
         * interval per update
         *
         * @param interval
         * @return
         */
        public int Interval(int interval) {
            if (interval > 5000) {
                interval = 5000;
            } else if (interval < 10) {
                interval = 10;
            }
            this.interval = interval;
            return 0;
        }

        /**
         * fastest: ikcp_nodelay(kcp, 1, 20, 2, 1) nodelay: 0:disable(default),
         * 1:enable interval: internal update timer interval in millisec, default is
         * 100ms resend: 0:disable fast resend(default), 1:enable fast resend nc:
         * 0:normal congestion control(default), 1:disable congestion control
         *
         * @param nodelay
         * @param interval
         * @param resend
         * @param nc
         * @return
         */
        public int NoDelay(int nodelay, int interval, int resend, int nc) {
            if (nodelay >= 0) {
                this.nodelay = nodelay;
                if (nodelay != 0) {
                    rx_minrto = IKCP_RTO_NDL;
                } else {
                    rx_minrto = IKCP_RTO_MIN;
                }
            }
            if (interval >= 0) {
                if (interval > 5000) {
                    interval = 5000;
                } else if (interval < 10) {
                    interval = 10;
                }
                this.interval = interval;
            }
            if (resend >= 0) {
                fastresend = resend;
            }
            if (nc >= 0) {
                nocwnd = nc;
            }
            return 0;
        }

        /**
         * set maximum window size: sndwnd=32, rcvwnd=32 by default
         *
         * @param sndwnd
         * @param rcvwnd
         * @return
         */
        public int WndSize(int sndwnd, int rcvwnd) {
            if (sndwnd > 0) {
                snd_wnd = sndwnd;
            }
            if (rcvwnd > 0) {
                rcv_wnd = rcvwnd;
            }
            return 0;
        }

        /**
         * get how many packet is waiting to be sent
         *
         * @return
         */
        public int WaitSnd() {
            return snd_buf.Count + snd_queue.Count;
        }

        public void SetNextUpdate(int nextUpdate) {
            this.nextUpdate = nextUpdate;
        }

        public int GetNextUpdate() {
            return nextUpdate;
        }

        public Object GetUser() {
            return user;
        }
        public bool IsStream() {
            return stream;
        }

        public void SetStream(bool stream) {
            this.stream = stream;
        }

        public void SetMinRto(int min) {
            rx_minrto = min;
        }
        public void SetConv(int conv) {
            this.conv = conv;
        }
    }

}
