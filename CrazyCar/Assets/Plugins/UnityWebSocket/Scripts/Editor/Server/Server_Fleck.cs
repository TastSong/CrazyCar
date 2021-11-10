using Fleck;
using System.Collections.Generic;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using UnityEditor;
using UnityEngine;

namespace UnityWebSocket.Editor
{
    internal class Server_Fleck : EditorWindow
    {
        static Server_Fleck window = null;
        [MenuItem("Tools/UnityWebSocket/Server(Fleck)", priority = 102)]
        internal static void Open()
        {
            if (window != null)
            {
                window.Close();
            }

            window = GetWindow<Server_Fleck>(true, "Server(Fleck)");
            window.minSize = window.maxSize = new Vector2(600, 500);
            window.Show();
        }

        private void OnEnable()
        {
            FleckLog.LogAction = (level, message, ex) =>
            {
                string _log = level + ": " + message;
                if (ex != null)
                {
                    _log += " error: " + ex.Message;
                }
                switch (level)
                {
                    case LogLevel.Debug:
                        Log(_log);
                        break;
                    case LogLevel.Error:
                        Log(_log);
                        break;
                    case LogLevel.Warn:
                        Log(_log);
                        break;
                    default:
                        Log(_log);
                        break;
                }
            };
        }

        private void OnDestroy()
        {
            if (server != null && server.ListenerSocket != null
                 && server.ListenerSocket.Connected)
            {
                server.Dispose();
            }
        }

        private WebSocketServer server;
        private List<IWebSocketConnection> sockets = new List<IWebSocketConnection>();
        private List<string> logs = new List<string>();
        private Vector2 scroll;
        private bool needRepaint;
        private int port = 5963;
        private bool wss = false;

        private void OnGUI()
        {
            Color lastColor = GUI.color;
            window = this;
            bool isStart = server != null && server.ListenerSocket != null;

            EditorGUILayout.BeginHorizontal();
            EditorGUI.BeginDisabledGroup(isStart);
            EditorGUILayout.LabelField("Listening on port:", GUILayout.Width(110));
            port = EditorGUILayout.IntField(port, GUILayout.Width(80));
            EditorGUILayout.LabelField("", GUILayout.Width(10));
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.LabelField("Secure WebSockets(wss://)", GUILayout.Width(160));
            wss = EditorGUILayout.Toggle(wss);
            EditorGUI.EndDisabledGroup();
            EditorGUI.EndDisabledGroup();
            EditorGUILayout.EndHorizontal();
            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button("Clear Logs", GUILayout.Width(120)))
            {
                logs.Clear();
            }
            EditorGUILayout.EndHorizontal();
            scroll = EditorGUILayout.BeginScrollView(scroll, "box");
            foreach (var log in new List<string>(logs))
            {
                EditorGUILayout.LabelField(log);
            }
            EditorGUILayout.EndScrollView();

            if (!isStart)
            {
                GUI.color = Color.green;
                if (GUILayout.Button("Start", GUILayout.Height(30)))
                {
                    if (wss)
                    {
                        server = new WebSocketServer("wss://0.0.0.0:" + port);
                        var certPwd = "123456";
                        var certPath = "Assets/UnityWebSocket/Scripts/Editor/cert.pfx";
                        server.Certificate = new X509Certificate2(certPath, certPwd);
                        server.EnabledSslProtocols = SslProtocols.Tls11 | SslProtocols.Tls12 | SslProtocols.Ssl2;
                    }
                    else
                    {
                        server = new WebSocketServer("ws://0.0.0.0:" + port);
                    }
                    server.Start(OnSocketConnect);
                }
            }
            else
            {
                GUI.color = Color.red;
                if (GUILayout.Button("Stop", GUILayout.Height(30)))
                {
                    foreach (var socket in sockets)
                    {
                        socket.Close();
                    }
                    sockets.Clear();
                    server.ListenerSocket = null;
                    server = null;
                }
            }

            GUI.color = lastColor;
        }

        private void OnSocketConnect(IWebSocketConnection socket)
        {
            var id = socket.ConnectionInfo.Id;
            socket.OnOpen = () =>
            {
                sockets.Add(socket);
                Log(id + ": Connected");
            };
            socket.OnClose = () =>
            {
                sockets.Remove(socket);
                Log(id + ": Closed");
            };
            socket.OnBinary = bytes =>
            {
                Log(id + ": Received: bytes(" + bytes.Length + ")");
                socket.Send(bytes);
            };
            socket.OnMessage = message =>
            {
                Log(id + ": Received: " + message + "");
                socket.Send(message);
            };
            socket.OnError = error =>
            {
                Log(socket.ConnectionInfo.Id + ": " + error.Message);
            };
        }

        private void OnInspectorUpdate()
        {
            if (needRepaint && window != null)
            {
                window.Repaint();
                needRepaint = false;
            }
        }

        internal static void Log(string log)
        {
            if (window == null) return;
            window.logs.Add(log);
            window.needRepaint = true;
        }
    }
}
