#if UNITY_EDITOR || UNITY_WEBGL
using System;

namespace UnityWebSocket.WebGL
{
    public class WebSocket : IWebSocket
    {
        public string Address { get; private set; }
        public WebSocketState ReadyState { get { return (WebSocketState)WebSocketManager.WebSocketGetState(instanceID); } }

        public event EventHandler<OpenEventArgs> OnOpen;
        public event EventHandler<CloseEventArgs> OnClose;
        public event EventHandler<ErrorEventArgs> OnError;
        public event EventHandler<MessageEventArgs> OnMessage;

        private int instanceID;

        public WebSocket(string address)
        {
            this.Address = address;
            this.instanceID = WebSocketManager.Add(this);
        }

        ~WebSocket()
        {
            WebSocketManager.HandleInstanceDestroy(instanceID);
        }

        internal void HandleOnOpen()
        {
            if (OnOpen != null)
                OnOpen.Invoke(this, new OpenEventArgs());
        }

        internal void HandleOnMessage(byte[] rawData)
        {
            if (OnMessage != null)
                OnMessage.Invoke(this, new MessageEventArgs(Opcode.Binary, rawData));
        }

        internal void HandleOnMessageStr(string data)
        {
            if (OnMessage != null)
                OnMessage.Invoke(this, new MessageEventArgs(Opcode.Text, data));
        }

        internal void HandleOnClose(ushort code, string reason)
        {
            if (OnClose != null)
                OnClose.Invoke(this, new CloseEventArgs(code, reason));
        }

        internal void HandleOnError(string msg)
        {
            if (OnError != null)
                OnError.Invoke(this, new ErrorEventArgs(msg));
        }

        public void ConnectAsync()
        {
            int ret = WebSocketManager.WebSocketConnect(instanceID);
            if (ret < 0)
                HandleOnError(WebSocketManager.GetErrorMessageFromCode(ret));
        }

        public void CloseAsync()
        {
            int ret = WebSocketManager.WebSocketClose(instanceID, (int)CloseStatusCode.Normal, "Normal Closure");
            if (ret < 0)
                HandleOnError(WebSocketManager.GetErrorMessageFromCode(ret));
        }

        public void SendAsync(string text)
        {
            int ret = WebSocketManager.WebSocketSendStr(instanceID, text);
            if (ret < 0)
                HandleOnError(WebSocketManager.GetErrorMessageFromCode(ret));
        }

        public void SendAsync(byte[] data)
        {
            int ret = WebSocketManager.WebSocketSend(instanceID, data, data.Length);
            if (ret < 0)
                HandleOnError(WebSocketManager.GetErrorMessageFromCode(ret));
        }
    }
}
#endif