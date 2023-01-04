using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;

namespace KcpCSharp {
    /// <summary>
    /// kcp客戶端程序
    /// </summary>
	public abstract class KcpClient : KcpOnUdp {
        protected volatile bool running;
        /// <summary>
        /// kcp，随机分配一个端口
        /// </summary>
        public KcpClient() : base(0) {
        }
        /// <summary>
        /// 初始化kcp
        /// </summary>
        /// <param name="port">监听端口</param>
        /// 
        public KcpClient(int port) : base(port) {
        }
        /// <summary>
        /// 是否在运行状态
        /// </summary>
        /// <returns></returns>
        public bool IsRunning() {
            return this.running;
        }
        /// <summary>
        /// 停止udp
        /// </summary>
        public void Stop() {
            if (running) {
                running = false;
                try {
                    this.client.Close();
                } catch (Exception ex) {
                }
            }
        }
        protected override void HandleException(Exception ex) {
            this.Stop();
        }
        protected override void HandleTimeout() {
            this.Stop();
        }
        /// <summary>
        /// 开启线程开始工作
        /// </summary>
        public void Start() {
            if (!this.running) {
                this.running = true;
                Thread t = new Thread(new ThreadStart(run));//状态更新
                t.IsBackground = true;
                t.Start();
            }
        }
        private void run() {
            while (running) {
                DateTime st = DateTime.Now;
                this.Update();
                if (this.needUpdate) {
                    continue;
                }
                DateTime end = DateTime.Now;
                while ((end - st).TotalMilliseconds < 10) {
                    if (this.needUpdate) {
                        break;
                    }
                    Thread.Sleep(0);
                    end = DateTime.Now;
                }
            }
        }
    }
}
