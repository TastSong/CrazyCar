using System.Collections.Generic;
using UnityEngine;

namespace UnityWebSocket
{
    internal class WebSocketManager : MonoBehaviour
    {
        private const string rootName = "[UnityWebSocket]";
        private static WebSocketManager _instance;
        public static WebSocketManager Instance
        {
            get
            {
                if (_instance == null)
                    AutoCreateInstance();
                return _instance;
            }
        }

        void Awake()
        {
            DontDestroyOnLoad(gameObject);
            _instance = this;
        }


        public static void AutoCreateInstance()
        {
            GameObject go = GameObject.Find("/" + rootName);
            if (go == null)
            {
                go = new GameObject(rootName);
            }

            if (go.GetComponent<WebSocketManager>() == null)
            {
                go.AddComponent<WebSocketManager>();
            }
        }

        private readonly List<WebSocket> sockets = new List<WebSocket>();

        public void Add(WebSocket socket)
        {
            lock (sockets)
            {
                if (!sockets.Contains(socket))
                    sockets.Add(socket);
            }
        }

        float clearCheckTimeStamp = 0;
        private void Update()
        {
            if (sockets.Count <= 0)
                return;

            bool clearCheck = Time.realtimeSinceStartup - clearCheckTimeStamp >= 60;

            lock (sockets)
            {
                for (int i = sockets.Count - 1; i >= 0; i--)
                {
                    sockets[i].Update();
                    if (clearCheck && sockets[i].ReadyState == WebSocketState.Closed)
                    {
                        sockets.RemoveAt(i);
                    }
                }
            }

            if (clearCheck)
            {
                clearCheckTimeStamp = Time.realtimeSinceStartup;
            }
        }
    }
}
