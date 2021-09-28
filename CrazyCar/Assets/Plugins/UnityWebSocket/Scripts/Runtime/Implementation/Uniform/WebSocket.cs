using System;

namespace UnityWebSocket.Uniform
{
    public class WebSocket : IWebSocket
    {
        #region Public Events
        public event EventHandler<OpenEventArgs> OnOpen;
        public event EventHandler<CloseEventArgs> OnClose;
        public event EventHandler<ErrorEventArgs> OnError;
        public event EventHandler<MessageEventArgs> OnMessage;
        #endregion

        public string Address { get { return _rawSocket.Address; } }

        public WebSocketState ReadyState { get { return _rawSocket.ReadyState; } }

        private readonly IWebSocket _rawSocket;

        public WebSocket(string address)
        {
#if !UNITY_EDITOR && UNITY_WEBGL
            _rawSocket = new WebGL.WebSocket(address);
#elif !NET_LEGACY
            _rawSocket = new NoWebGL.Default.WebSocket(address);
#else
            //TODO: legacy .net 3.5 websocket
#endif
            _rawSocket.OnOpen += (o, e) =>
            {
                if (OnOpen != null)
                    OnOpen.Invoke(this, e);
            };
            _rawSocket.OnClose += (o, e) =>
            {
                if (OnClose != null)
                    OnClose.Invoke(this, e);
            };
            _rawSocket.OnError += (o, e) =>
            {
                if (OnError != null)
                    OnError.Invoke(this, e);
            };
            _rawSocket.OnMessage += (o, e) =>
            {
                if (OnMessage != null)
                    OnMessage.Invoke(this, e);
            };
        }


        public void SendAsync(string data)
        {
            _rawSocket.SendAsync(data);
        }

        public void SendAsync(byte[] data)
        {
            _rawSocket.SendAsync(data);
        }

        public void ConnectAsync()
        {
            _rawSocket.ConnectAsync();
        }

        public void CloseAsync()
        {
            _rawSocket.CloseAsync();
        }
    }
}
