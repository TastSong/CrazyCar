#if UNITY_EDITOR || UNITY_WEBGL
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

namespace UnityWebSocket.WebGL
{
    /// <summary>
    /// Class providing static access methods to work with JSLIB WebSocket
    /// </summary>
    internal static class WebSocketManager
    {
        /* Map of websocket instances */
        private static Dictionary<int, WebSocket> instances = new Dictionary<int, WebSocket>();

        /* Delegates */
        public delegate void OnOpenCallback(int instanceId);
        public delegate void OnMessageCallback(int instanceId, IntPtr msgPtr, int msgSize);
        public delegate void OnMessageStrCallback(int instanceId, IntPtr msgStrPtr);
        public delegate void OnErrorCallback(int instanceId, IntPtr errorPtr);
        public delegate void OnCloseCallback(int instanceId, int closeCode, IntPtr reasonPtr);

        /* WebSocket JSLIB functions */
        [DllImport("__Internal")]
        public static extern int WebSocketConnect(int instanceId);

        [DllImport("__Internal")]
        public static extern int WebSocketClose(int instanceId, int code, string reason);

        [DllImport("__Internal")]
        public static extern int WebSocketSend(int instanceId, byte[] dataPtr, int dataLength);

        [DllImport("__Internal")]
        public static extern int WebSocketSendStr(int instanceId, string dataPtr);

        [DllImport("__Internal")]
        public static extern int WebSocketGetState(int instanceId);

        /* WebSocket JSLIB callback setters and other functions */
        [DllImport("__Internal")]
        public static extern int WebSocketAllocate(string url);

        [DllImport("__Internal")]
        public static extern void WebSocketFree(int instanceId);

        [DllImport("__Internal")]
        public static extern void WebSocketSetOnOpen(OnOpenCallback callback);

        [DllImport("__Internal")]
        public static extern void WebSocketSetOnMessage(OnMessageCallback callback);

        [DllImport("__Internal")]
        public static extern void WebSocketSetOnMessageStr(OnMessageStrCallback callback);

        [DllImport("__Internal")]
        public static extern void WebSocketSetOnError(OnErrorCallback callback);

        [DllImport("__Internal")]
        public static extern void WebSocketSetOnClose(OnCloseCallback callback);

        /* If callbacks was initialized and set */
        private static bool isInitialized = false;

        /* Initialize WebSocket callbacks to JSLIB */
        private static void Initialize()
        {
            WebSocketSetOnOpen(DelegateOnOpenEvent);
            WebSocketSetOnMessage(DelegateOnMessageEvent);
            WebSocketSetOnMessageStr(DelegateOnMessageStrEvent);
            WebSocketSetOnError(DelegateOnErrorEvent);
            WebSocketSetOnClose(DelegateOnCloseEvent);

            isInitialized = true;
        }

        /// <summary>
        /// Called when instance is destroyed (by destructor)
        /// Method removes instance from map and free it in JSLIB implementation
        /// </summary>
        /// <param name="instanceId">Instance identifier.</param>
        public static void HandleInstanceDestroy(int instanceId)
        {
            instances.Remove(instanceId);
            WebSocketFree(instanceId);
        }

        [MonoPInvokeCallback(typeof(OnOpenCallback))]
        public static void DelegateOnOpenEvent(int instanceId)
        {

            WebSocket instanceRef;

            if (instances.TryGetValue(instanceId, out instanceRef))
            {
                instanceRef.HandleOnOpen();
            }

        }

        [MonoPInvokeCallback(typeof(OnMessageCallback))]
        public static void DelegateOnMessageEvent(int instanceId, IntPtr msgPtr, int msgSize)
        {
            WebSocket instanceRef;
            if (instances.TryGetValue(instanceId, out instanceRef))
            {
                var bytes = new byte[msgSize];
                Marshal.Copy(msgPtr, bytes, 0, msgSize);
                instanceRef.HandleOnMessage(bytes);
            }
        }


        [MonoPInvokeCallback(typeof(OnMessageCallback))]
        public static void DelegateOnMessageStrEvent(int instanceId, IntPtr msgStrPtr)
        {
            WebSocket instanceRef;
            if (instances.TryGetValue(instanceId, out instanceRef))
            {
                string msgStr = Marshal.PtrToStringAuto(msgStrPtr);
                instanceRef.HandleOnMessageStr(msgStr);
            }
        }

        [MonoPInvokeCallback(typeof(OnErrorCallback))]
        public static void DelegateOnErrorEvent(int instanceId, IntPtr errorPtr)
        {
            WebSocket instanceRef;
            if (instances.TryGetValue(instanceId, out instanceRef))
            {
                string errorMsg = Marshal.PtrToStringAuto(errorPtr);
                instanceRef.HandleOnError(errorMsg);
            }
        }

        [MonoPInvokeCallback(typeof(OnCloseCallback))]
        public static void DelegateOnCloseEvent(int instanceId, int closeCode, IntPtr reasonPtr)
        {
            WebSocket instanceRef;
            if (instances.TryGetValue(instanceId, out instanceRef))
            {
                string reason = Marshal.PtrToStringAuto(reasonPtr);
                instanceRef.HandleOnClose((ushort)closeCode, reason);
            }
        }

        public static int Add(WebSocket socket)
        {
            if (!isInitialized)
                Initialize();

            int instanceId = WebSocketAllocate(socket.Address);
            instances.Add(instanceId, socket);
            return instanceId;
        }

        public static string GetErrorMessageFromCode(int errorCode)
        {
            switch (errorCode)
            {

                case -1: return "WebSocket instance not found.";
                case -2: return "WebSocket is already connected or in connecting state.";
                case -3: return "WebSocket is not connected.";
                case -4: return "WebSocket is already closing.";
                case -5: return "WebSocket is already closed.";
                case -6: return "WebSocket is not in open state.";
                case -7: return "Cannot close WebSocket. An invalid code was specified or reason is too long.";
                default: return "Unknown error.";
            }
        }
    }
}
#endif