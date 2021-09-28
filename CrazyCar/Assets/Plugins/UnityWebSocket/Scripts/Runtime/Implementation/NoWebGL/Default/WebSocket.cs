#if !NET_LEGACY && (UNITY_EDITOR || !UNTIY_WEBGL)
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Net.WebSockets;

namespace UnityWebSocket.NoWebGL.Default
{
    public class WebSocket : IWebSocket
    {
        public string Address { get; private set; }

        public WebSocketState ReadyState
        {
            get
            {
                if (socket == null)
                    return WebSocketState.Closed;
                switch (socket.State)
                {
                    case System.Net.WebSockets.WebSocketState.Closed:
                    case System.Net.WebSockets.WebSocketState.None:
                        return WebSocketState.Closed;
                    case System.Net.WebSockets.WebSocketState.CloseReceived:
                    case System.Net.WebSockets.WebSocketState.CloseSent:
                        return WebSocketState.Closing;
                    case System.Net.WebSockets.WebSocketState.Connecting:
                        return WebSocketState.Connecting;
                    case System.Net.WebSockets.WebSocketState.Open:
                        return WebSocketState.Open;
                }
                return WebSocketState.Closed;
            }
        }

        public event EventHandler<OpenEventArgs> OnOpen;
        public event EventHandler<CloseEventArgs> OnClose;
        public event EventHandler<ErrorEventArgs> OnError;
        public event EventHandler<MessageEventArgs> OnMessage;

        private ClientWebSocket socket;
        private CancellationTokenSource cts;
        private bool IsCtsCancel { get { return cts == null || cts.IsCancellationRequested; } }
        private bool isSendAsyncRunning;
        private bool isReceiveAsyncRunning;

        //TODO: OPTIMIZE THIS API
        /// <summary>
        /// run the socket async method on main thread, if you want.
        /// </summary>
        public static bool runOnMainThread { get; set; } = false;

        #region APIs
        public WebSocket(string address)
        {
            this.Address = address;
        }

        public void ConnectAsync()
        {
            if (cts != null || socket != null)
            {
                HandleError(new Exception("socket is busy."));
                return;
            }
            cts = new CancellationTokenSource();
            socket = new ClientWebSocket();
            RunConnectAsync();
        }

        public void CloseAsync()
        {
            RunCloseAsync();
        }

        public void SendAsync(byte[] data)
        {
            var sendBuffer = SpawnBuffer(WebSocketMessageType.Binary, data);
            PushBuffer(sendBuffer);
        }

        public void SendAsync(string text)
        {
            var data = Encoding.UTF8.GetBytes(text);
            var sendBuffer = SpawnBuffer(WebSocketMessageType.Text, data);
            PushBuffer(sendBuffer);
        }
        #endregion

        #region Run Async
        private async void RunConnectAsync()
        {
            Log("Run ConnectAsync ...");
            if (runOnMainThread)
                await _ConnectAsync();
            else
                await Task.Run(_ConnectAsync);
            Log("Run ConnectAsync End !");
        }

        private async void RunCloseAsync()
        {
            Log("Run CloseAsync ...");
            if (runOnMainThread)
                await _CloseAsync();
            else
                await Task.Run(_CloseAsync);
            Log("Run CloseAsync End !");
        }

        private async void RunSendAsync()
        {
            Log("Run SendAsync ...");
            if (runOnMainThread)
                await _SendAsync();
            else
                await Task.Run(_SendAsync);
            Log("Run SendAsync End !");
        }

        private async void RunReceiveAsync()
        {
            Log("Run ReceiveAsync ...");
            if (runOnMainThread)
                await _ReceiveAsync();
            else
                await Task.Run(_ReceiveAsync);
            Log("Run ReceiveAsync End !");
        }

        #endregion

        private async Task _ConnectAsync()
        {
            Log("ConnectAsync Begin ...");

            try
            {
                var uri = new Uri(Address);
                await socket.ConnectAsync(uri, cts.Token);
            }
            catch (Exception e)
            {
                HandleError(e);
                HandleClose((ushort)CloseStatusCode.Abnormal, e.Message);
                SocketDispose();
                return;
            }

            RunSendAsync();
            RunReceiveAsync();

            HandleOpen();

            Log("ConnectAsync End !");
        }

        private async Task _CloseAsync()
        {
            Log("CloseAsync Begin ...");

            try
            {
                await socket.CloseAsync(WebSocketCloseStatus.NormalClosure, "Normal Closure", cts.Token);
            }
            catch (Exception e)
            {
                HandleError(e);
            }

            Log("CloseAsync End !");
        }

        private async Task _SendAsync()
        {
            Log("SendAsync Begin ...");

            try
            {
                isSendAsyncRunning = true;
                SendBuffer buffer = null;
                while (!IsCtsCancel)
                {
                    if (sendBuffers.Count <= 0)
                    {
                        await Task.Delay(1);
                        continue;
                    }
                    buffer = PopBuffer();
                    if (!IsCtsCancel)
                    {
                        await socket.SendAsync(buffer.buffer, buffer.type, true, cts.Token);
                    }
                    ReleaseBuffer(buffer);

                    Log("SendBuffers: " + sendBuffers.Count + ", PoolelBuffers: " + pooledSendBuffers.Count);
                }
            }
            catch (Exception e)
            {
                HandleError(e);
            }
            finally
            {
                while (sendBuffers.Count > 0)
                {
                    ReleaseBuffer(PopBuffer());
                }
                isSendAsyncRunning = false;
            }

            Log("SendAsync End !");
        }

        private async Task _ReceiveAsync()
        {
            Log("ReceiveAsync Begin ...");

            var bufferCap = 1024;
            var buffer = new byte[bufferCap];
            var received = 0;

            string closeReason = "";
            ushort closeCode = 0;
            bool isClosed = false;

            try
            {
                isReceiveAsyncRunning = true;
                var segment = new ArraySegment<byte>(buffer);

                while (!IsCtsCancel && !isClosed)
                {
                    WebSocketReceiveResult result = await socket.ReceiveAsync(segment, cts.Token);
                    received += result.Count;

                    if (received >= buffer.Length && !result.EndOfMessage)
                    {
                        bufferCap = bufferCap * 2;
                        var newBuffer = new byte[bufferCap];
                        Array.Copy(buffer, newBuffer, buffer.Length);
                        buffer = newBuffer;
                        newBuffer = null;
                        Log("Expand Receive Buffer to " + bufferCap);
                    }

                    if (!result.EndOfMessage)
                    {
                        segment = new ArraySegment<byte>(buffer, received, buffer.Length - received);
                        continue;
                    }

                    byte[] data = new byte[received];
                    for (int i = 0; i < received; i++)
                    {
                        data[i] = buffer[i];
                    }

                    switch (result.MessageType)
                    {
                        case WebSocketMessageType.Binary:
                            HandleMessage(Opcode.Binary, data);
                            break;
                        case WebSocketMessageType.Text:
                            HandleMessage(Opcode.Text, data);
                            break;
                        case WebSocketMessageType.Close:
                            isClosed = true;
                            closeCode = (ushort)result.CloseStatus;
                            closeReason = result.CloseStatusDescription;
                            break;
                    }
                    received = 0;
                    segment = new ArraySegment<byte>(buffer);
                }
            }
            catch (Exception e)
            {
                HandleError(e);
                closeCode = (ushort)CloseStatusCode.Abnormal;
                closeReason = e.Message;
            }
            finally
            {
                isReceiveAsyncRunning = false;
            }

            cts.Cancel();

            Log("Wait For Close ...");

            while (!IsCtsCancel || isSendAsyncRunning || isReceiveAsyncRunning)
            {
                await Task.Delay(1);
            }

            Log("Wait For Close End !");

            HandleClose(closeCode, closeReason);
            SocketDispose();

            Log("Receive Async End !");
        }

        private void SocketDispose()
        {
            cts.Dispose();
            socket.Dispose();
            cts = null;
            socket = null;
        }

        //TODO: OPTIMIZE Send Pool
        private readonly Queue<SendBuffer> sendBuffers = new Queue<SendBuffer>();
        private readonly Queue<SendBuffer> pooledSendBuffers = new Queue<SendBuffer>();

        class SendBuffer
        {
            public WebSocketMessageType type;
            public ArraySegment<byte> buffer;
        }

        private void PushBuffer(SendBuffer sendBuffer)
        {
            lock (sendBuffers)
            {
                sendBuffers.Enqueue(sendBuffer);
            }
        }

        private SendBuffer PopBuffer()
        {
            SendBuffer buffer;
            lock (sendBuffers)
            {
                buffer = sendBuffers.Dequeue();
            }
            return buffer;
        }

        private void ReleaseBuffer(SendBuffer sendBuffer)
        {
            sendBuffer.buffer = default;
            lock (pooledSendBuffers)
            {
                pooledSendBuffers.Enqueue(sendBuffer);
            }
        }

        private SendBuffer SpawnBuffer(WebSocketMessageType type, byte[] bytes)
        {
            SendBuffer sendBuffer = null;
            if (pooledSendBuffers.Count <= 0)
            {
                sendBuffer = new SendBuffer
                {
                    type = type,
                    buffer = new ArraySegment<byte>(bytes),
                };
                return sendBuffer;
            }

            lock (pooledSendBuffers)
            {
                sendBuffer = pooledSendBuffers.Dequeue();
            }

            sendBuffer.type = type;
            sendBuffer.buffer = new ArraySegment<byte>(bytes);

            return sendBuffer;
        }

        private void HandleOpen()
        {
            Log("OnOpen");
            OnOpen?.Invoke(this, new OpenEventArgs());
        }

        private void HandleMessage(Opcode opcode, byte[] rawData)
        {
            Log("OnMessage: " + opcode + "(" + rawData.Length + ")");
            OnMessage?.Invoke(this, new MessageEventArgs(opcode, rawData));
        }

        private void HandleClose(ushort code, string reason)
        {
            Log("OnClose: " + reason + "(" + code + ")");
            OnClose?.Invoke(this, new CloseEventArgs(code, reason));
        }

        private void HandleError(Exception exception)
        {
            Log("OnError: " + exception.Message);
            OnError?.Invoke(this, new ErrorEventArgs(exception.Message));
        }

        [System.Diagnostics.Conditional("UNITY_WEB_SOCKET_LOG")]
        private void Log(string msg)
        {
            UnityEngine.Debug.Log($"<color=yellow>[UnityWebSocket]</color>" +
                $"<color=green>[T-{Thread.CurrentThread.ManagedThreadId:D3}]</color>" +
                $"<color=red>[{DateTime.Now.TimeOfDay}]</color>" +
                $" {msg}");
        }
    }
}
#endif
