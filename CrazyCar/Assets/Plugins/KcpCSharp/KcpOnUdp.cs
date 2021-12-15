using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net.Sockets;
using System.Net;

namespace KcpCSharp {
    public abstract class KcpOnUdp : Output {
        protected UdpClient client;
        protected Kcp kcp;
        protected IPEndPoint serverAddr;
        protected Object LOCK = new Object();//加锁访问收到的数据
        protected Object SEND_LOCK = new Object();//加锁访问发送列表
        protected LinkedList<ByteBuf> received;
        protected LinkedList<ByteBuf> sendList;
        protected int nodelay;
        protected int interval = Kcp.IKCP_INTERVAL;
        protected int resend;
        protected int nc;
        protected int sndwnd = Kcp.IKCP_WND_SND;
        protected int rcvwnd = Kcp.IKCP_WND_RCV;
        protected int mtu = Kcp.IKCP_MTU_DEF;
        protected volatile bool needUpdate;
        protected long timeout;//超时
        protected DateTime lastTime;//上次检测时间
        private IPEndPoint curAddr;//当前的客户端地址
        /// <summary>
        /// 客户端
        /// </summary>
        public KcpOnUdp() : this(0) {
        }
        public KcpOnUdp(int port) {
            client = new UdpClient(port);
            kcp = new Kcp(port, this, null);
            this.received = new LinkedList<ByteBuf>();
            this.sendList = new LinkedList<ByteBuf>();
        }
        /// <summary>
        /// 连接到地址
        /// </summary>
        public void Connect(string host, int port) {
            if (host != null) {
                serverAddr = new IPEndPoint(IPAddress.Parse(host), port);
            }
            //mode setting
            kcp.NoDelay(nodelay, interval, resend, nc);
            kcp.WndSize(sndwnd, rcvwnd);
            kcp.SetMtu(mtu);
            try {
                if (serverAddr != null) {
                    this.client.Connect(serverAddr);
                }
                //UnityEngine.Debug.LogError("Connect = " + host);
                client.BeginReceive(Received, client);
            } catch (Exception ex) {
                this.HandleException(ex);
            }
        }
        /// <summary>
        /// 超时设定
        /// </summary>
        public void Timeout(long timeout) {
            this.timeout = timeout;
        }
        public override void output(ByteBuf msg, Kcp kcp, Object user) {
            this.client.Send(msg.GetRaw(), msg.ReadableBytes());
        }
        private void Received(IAsyncResult ar) {
            UdpClient client = (UdpClient)ar.AsyncState;
            try {
                byte[] data = client.EndReceive(ar, ref this.curAddr);
                lock (LOCK) {
                    this.received.AddLast(new ByteBuf(data));
                    this.needUpdate = true;
                    this.lastTime = DateTime.Now;
                }
                client.BeginReceive(Received, ar.AsyncState);
            } catch (Exception ex) {
                this.HandleException(ex);
            }
        }
        /// <summary>
        /// 发送
        /// </summary>
        /// <param name="content"></param>
        public void Send(ByteBuf content) {
            lock (this.SEND_LOCK) {
                this.sendList.AddLast(content);
                this.needUpdate = true;
            }
        }
        /// <summary>
        /// 更新
        /// </summary>
        public void Update() {
            //input
            lock (LOCK) {
                while (this.received.Count > 0) {
                    ByteBuf bb = this.received.First.Value;
                    kcp.Input(bb);
                    this.received.RemoveFirst();
                }
            }
            //receive
            int len;
            while ((len = kcp.PeekSize()) > 0) {
                ByteBuf bb = new ByteBuf(len);
                int n = kcp.Receive(bb);
                if (n > 0) {
                    this.HandleReceive(bb);
                }
            }
            //send
            lock (this.SEND_LOCK) {
                while (this.sendList.Count > 0) {
                    ByteBuf item = this.sendList.First.Value;
                    this.kcp.Send(item);
                    this.sendList.RemoveFirst();
                }
            }
            //update kcp status
            int cur = (int)DateTime.Now.Ticks;
            if (this.needUpdate || cur >= kcp.GetNextUpdate()) {
                kcp.Update(cur);
                kcp.SetNextUpdate(kcp.Check(cur));
                this.needUpdate = false;
            }
            //check timeout
            if (this.timeout > 0 && lastTime != DateTime.MinValue) {
                double del = (DateTime.Now - this.lastTime).TotalMilliseconds;
                if (del > this.timeout) {
                    this.HandleTimeout();
                }
            }
        }
        /**
         * 处理收到的消息
         */
        protected abstract void HandleReceive(ByteBuf bb);
        /// <summary>
        /// 处理异常
        /// </summary>
        /// <param name="ex"></param>
        protected abstract void HandleException(Exception ex);
        /// <summary>
        /// 超时处理
        /// </summary>
        protected abstract void HandleTimeout();
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
         */
        public void NoDelay(int nodelay, int interval, int resend, int nc) {
            this.nodelay = nodelay;
            this.interval = interval;
            this.resend = resend;
            this.nc = nc;
        }

        /**
         * set maximum window size: sndwnd=32, rcvwnd=32 by default
         *
         * @param sndwnd
         * @param rcvwnd
         */
        public void WndSize(int sndwnd, int rcvwnd) {
            this.sndwnd = sndwnd;
            this.rcvwnd = rcvwnd;
        }

        /**
         * change MTU size, default is 1400
         *
         * @param mtu
         */
        public void SetMtu(int mtu) {
            this.mtu = mtu;
        }
        public bool IsStream() {
            return this.kcp.IsStream();
        }

        public void SetStream(bool stream) {
            this.kcp.SetStream(stream);
        }

        public void SetMinRto(int min) {
            this.kcp.SetMinRto(min);
        }
        public void SetConv(int conv) {
            this.kcp.SetConv(conv);
        }
    }
}
