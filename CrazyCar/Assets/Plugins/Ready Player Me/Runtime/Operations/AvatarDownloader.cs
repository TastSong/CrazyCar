using System;
using System.IO;
using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEngine.Networking;

namespace ReadyPlayerMe
{
    public class AvatarDownloader: IDownload
    {
        // Save destination of the avatar models under Application.persistentDataPath
        // TODO: Expose this and let developer change it to where they want
        private const string SAVE_FOLDER = "Resources/Avatars";
        
        public int Timeout { get; set; } = 20;
        public Action<FailureType, string> OnFailed;
        public Action<float> OnProgressChanged;
        public Action<byte[]> OnCompleted;
        
        private bool HasInternetConnection => Application.internetReachability != NetworkReachability.NotReachable;
        
        private void CheckFileDirectory()
        {
            #if UNITY_EDITOR
                if (!Directory.Exists($"{ Application.dataPath }/{ SAVE_FOLDER }"))
                {
                    Directory.CreateDirectory($"{ Application.dataPath }/{ SAVE_FOLDER }");
                }
            #else
                OnFailed?.Invoke(FailureType.DirectoryAccessError, "Directory access is available only in the editor.");
                throw new Exception("Directory access is available only in the editor.");
            #endif
        }
        
        public IEnumerator DownloadIntoMemory(string url)
        {
            if (HasInternetConnection)
            {
                using (var request = new UnityWebRequest(url))
                {
                    request.timeout = Timeout;
                    request.downloadHandler = new DownloadHandlerBuffer();

                    var op = request.SendWebRequest();

                    while (!op.isDone)
                    {
                        yield return null;
                        OnProgressChanged?.Invoke(request.downloadProgress);
                    }
                    
                    if (request.downloadedBytes == 0 || request.isHttpError || request.isNetworkError)
                    {
                        OnFailed?.Invoke(FailureType.ModelDownloadError, $"Failed to download glb model into memory. {request.error}");
                    }
                    else
                    {
                        var bytes = request.downloadHandler.data;
                        OnCompleted?.Invoke(bytes);
                    }
                }
            }
            else {
                OnFailed?.Invoke(FailureType.NoInternetConnection, "No internet connection.");
            }
        }

        public IEnumerator DownloadIntoFile(string url, string path)
        {
            CheckFileDirectory();
            
            if (HasInternetConnection)
            {
                using (var request = new UnityWebRequest(url))
                {
                    request.timeout = Timeout;
                    request.downloadHandler = new DownloadHandlerFile(path);

                    var op = request.SendWebRequest();
                    
                    while (!op.isDone)
                    {
                        yield return null;
                        OnProgressChanged?.Invoke(request.downloadProgress);
                    }

                    if (request.downloadedBytes == 0 || request.isHttpError || request.isNetworkError)
                    {
                        OnFailed?.Invoke(FailureType.ModelDownloadError, $"Failed to download glb model into file. {request.error}");
                    }
                    else
                    {
                        var byteLength = (long)request.downloadedBytes;
                        
                        var info = new FileInfo(path);

                        while (info.Length != byteLength)
                        {
                            info.Refresh();
                            yield return null;
                        }

                        // Reading file since can't access raw bytes from downloadHandler
                        var bytes = File.ReadAllBytes(path);
                        
                        OnCompleted?.Invoke(bytes);
                    }
                }
            }
            else {
                OnFailed?.Invoke(FailureType.NoInternetConnection, "No internet connection.");
            }
        }
    }
}
