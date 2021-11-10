using System;
using System.Collections.Generic;

namespace UnityWebSocket
{
    public class WebSocket : IWebSocket
    {
        public event EventHandler<OpenEventArgs> OnOpen;
        public event EventHandler<CloseEventArgs> OnClose;
        public event EventHandler<ErrorEventArgs> OnError;
        public event EventHandler<MessageEventArgs> OnMessage;
        public string Address { get { return _socket.Address; } }
        public WebSocketState ReadyState { get { return _socket.ReadyState; } }

        private readonly Uniform.WebSocket _socket;

        public WebSocket(string address)
        {
            _socket = new Uniform.WebSocket(address);

            _socket.OnOpen += (o, e) =>
            {
                lock (eventArgsQueue) { eventArgsQueue.Enqueue(e); }
            };
            _socket.OnClose += (o, e) =>
            {
                lock (eventArgsQueue) { eventArgsQueue.Enqueue(e); }
            };
            _socket.OnError += (o, e) =>
            {
                lock (eventArgsQueue) { eventArgsQueue.Enqueue(e); }
            };
            _socket.OnMessage += (o, e) =>
            {
                lock (eventArgsQueue) { eventArgsQueue.Enqueue(e); }
            };

            WebSocketManager.Instance.Add(this);
        }

        public void SendAsync(string data)
        {
            _socket.SendAsync(data);
        }

        public void SendAsync(byte[] data)
        {
            _socket.SendAsync(data);
        }

        public void ConnectAsync()
        {
            _socket.ConnectAsync();
        }

        public void CloseAsync()
        {
            _socket.CloseAsync();
        }

        private readonly Queue<EventArgs> eventArgsQueue = new Queue<EventArgs>();
        internal void Update()
        {
            while (eventArgsQueue.Count > 0)
            {
                EventArgs e;
                lock (eventArgsQueue)
                {
                    e = eventArgsQueue.Dequeue();
                }

                if (e is CloseEventArgs && OnClose != null)
                {
                    OnClose.Invoke(this, e as CloseEventArgs);
                }
                else if (e is OpenEventArgs && OnOpen != null)
                {
                    OnOpen.Invoke(this, e as OpenEventArgs);
                }
                else if (e is MessageEventArgs && OnMessage != null)
                {
                    OnMessage.Invoke(this, e as MessageEventArgs);
                }
                else if (e is ErrorEventArgs && OnError != null)
                {
                    OnError.Invoke(this, e as ErrorEventArgs);
                }
            }
        }
    }
}
