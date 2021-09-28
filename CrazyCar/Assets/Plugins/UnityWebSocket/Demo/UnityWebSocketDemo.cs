using UnityEngine;
using UnityWebSocket;

namespace UnityWebSocket.Demo
{
    public class UnityWebSocketDemo : MonoBehaviour
    {
        public string address = "ws://127.0.0.1";
        public string sendText = "Hello World!";
        public bool logMessage = true;

        private IWebSocket socket;

        private string log = "";
        private int sendCount;
        private int receiveCount;
        private Vector2 scrollPos;

#if !UNITY_EDITOR && UNITY_WEBGL
    private void Awake()
    {
        address = "wss://echo.websocket.org";
    }
#endif

        private void OnGUI()
        {
            var scale = Screen.width / 800f;
            GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(scale, scale, 1));
            var width = GUILayout.Width(Screen.width / scale - 10);

            WebSocketState state = socket == null ? WebSocketState.Closed : socket.ReadyState;

            GUILayout.Label("SDK Version: 2.5.0", width);
            var stateColor = state == WebSocketState.Closed ? "red" : state == WebSocketState.Open ? "#11ff11" : "#aa4444";
            var richText = new GUIStyle() { richText = true };
            GUILayout.Label(string.Format(" <color=white>State:</color> <color={1}>{0}</color>", state, stateColor), richText);

            GUI.enabled = state == WebSocketState.Closed;
            GUILayout.Label("Address: ", width);
            address = GUILayout.TextField(address, width);

            GUILayout.BeginHorizontal();
            GUI.enabled = state == WebSocketState.Closed;
            if (GUILayout.Button(state == WebSocketState.Connecting ? "Connecting..." : "Connect"))
            {
                socket = new WebSocket(address);
                socket.OnOpen += Socket_OnOpen;
                socket.OnMessage += Socket_OnMessage;
                socket.OnClose += Socket_OnClose;
                socket.OnError += Socket_OnError;
                AddLog(string.Format("Connecting...\n"));
                socket.ConnectAsync();
            }

            GUI.enabled = state == WebSocketState.Open;
            if (GUILayout.Button(state == WebSocketState.Closing ? "Closing..." : "Close"))
            {
                AddLog(string.Format("Closing...\n"));
                socket.CloseAsync();
            }
            GUILayout.EndHorizontal();

            GUILayout.Label("Text: ");
            sendText = GUILayout.TextArea(sendText, GUILayout.MinHeight(50), width);

            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Send"))
            {
                if (!string.IsNullOrEmpty(sendText))
                {
                    socket.SendAsync(sendText);
                    if (logMessage)
                        AddLog(string.Format("Send: {0}\n", sendText));
                    sendCount += 1;
                }
            }
            if (GUILayout.Button("Send Bytes"))
            {
                if (!string.IsNullOrEmpty(sendText))
                {
                    var bytes = System.Text.Encoding.UTF8.GetBytes(sendText);
                    socket.SendAsync(bytes);

                    if (logMessage)
                        AddLog(string.Format("Send Bytes ({1}): {0}\n", sendText, bytes.Length));
                    sendCount += 1;
                }
            }
            if (GUILayout.Button("Send x100"))
            {
                if (!string.IsNullOrEmpty(sendText))
                {
                    for (int i = 0; i < 100; i++)
                    {
                        var text = (i + 1).ToString() + ". " + sendText;
                        socket.SendAsync(text);

                        if (logMessage)
                            AddLog(string.Format("Send: {0}\n", text));
                        sendCount += 1;
                    }
                }
            }
            if (GUILayout.Button("Send Bytes x100"))
            {
                if (!string.IsNullOrEmpty(sendText))
                {
                    for (int i = 0; i < 100; i++)
                    {
                        var text = (i + 1).ToString() + ". " + sendText;
                        var bytes = System.Text.Encoding.UTF8.GetBytes(text);
                        socket.SendAsync(bytes);
                        if (logMessage)
                            AddLog(string.Format("Send Bytes ({1}): {0}\n", text, bytes.Length));
                        sendCount += 1;
                    }
                }
            }
            GUILayout.EndHorizontal();

            GUI.enabled = true;
            GUILayout.BeginHorizontal();
            logMessage = GUILayout.Toggle(logMessage, "Log Message");
            GUILayout.Label(string.Format("Send Count: {0}", sendCount));
            GUILayout.Label(string.Format("Receive Count: {0}", receiveCount));
            GUILayout.EndHorizontal();

            if (GUILayout.Button("Clear"))
            {
                log = "";
                receiveCount = 0;
                sendCount = 0;
            }

            scrollPos = GUILayout.BeginScrollView(scrollPos, GUILayout.MaxHeight(Screen.height / scale - 270), width);
            GUILayout.Label(log);
            GUILayout.EndScrollView();
        }

        private void AddLog(string str)
        {
            log += str;
            // max log
            if (log.Length > 32 * 1024)
            {
                log = log.Substring(16 * 1024);
            }
        }

        private void Socket_OnOpen(object sender, OpenEventArgs e)
        {
            AddLog(string.Format("Connected: {0}\n", address));
        }

        private void Socket_OnMessage(object sender, MessageEventArgs e)
        {
            if (e.IsBinary)
            {
                if (logMessage)
                    AddLog(string.Format("Receive Bytes ({1}): {0}\n", e.Data, e.RawData.Length));
            }
            else if (e.IsText)
            {
                if (logMessage)
                    AddLog(string.Format("Receive: {0}\n", e.Data));
            }
            receiveCount += 1;
        }

        private void Socket_OnClose(object sender, CloseEventArgs e)
        {
            AddLog(string.Format("Closed: StatusCode: {0}, Reason: {1}\n", e.StatusCode, e.Reason));
        }

        private void Socket_OnError(object sender, ErrorEventArgs e)
        {
            AddLog(string.Format("Error: {0}\n", e.Message));
        }

        private void OnApplicationQuit()
        {
            if (socket != null && socket.ReadyState != WebSocketState.Closed)
            {
                socket.CloseAsync();
            }
        }
    }
}
