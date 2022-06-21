using System;
using System.IO;
using UnityEngine;
using Newtonsoft.Json;
using System.Collections;
using UnityEngine.Networking;

namespace ReadyPlayerMe
{
    public class MetadataDownloader: IDownload
    {
        private const string SAVE_FOLDER = "Resources/Avatars";
        
        public int Timeout { get; set; } = 20;
        public Action<FailureType, string> OnFailed;
        public Action<AvatarMetadata> OnCompleted;
        
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
                using (var request = UnityWebRequest.Get(url))
                {
                    request.timeout = Timeout;
                    yield return request.SendWebRequest();

                    if (request.downloadedBytes == 0 || request.isHttpError || request.isNetworkError)
                    {
                        OnFailed?.Invoke(FailureType.MetadataDownloadError, $"Failed to download metadata into memory. {request.error}");
                    }
                    else
                    {
                        LoadMetaData(request.downloadHandler.text);
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

                    yield return request.SendWebRequest();

                    if (request.downloadedBytes == 0 || request.isHttpError || request.isNetworkError)
                    {
                        OnFailed?.Invoke(FailureType.MetadataDownloadError, $"Failed to download metadata into file. {request.error}");
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

                        var json = File.ReadAllText(path);

                        LoadMetaData(json);
                    }
                }
            }
            else {
                OnFailed?.Invoke(FailureType.NoInternetConnection, "No internet connection.");
            }
        }

        public void LoadMetaData(string json)
        {
            var metaData = JsonConvert.DeserializeObject<AvatarMetadata>(json);

            // TODO: when metadata for half-body avatars are fixed, make the check
            // if (metaData.OutfitGender == OutfitGender.None || metaData.BodyType == BodyType.None)
            if(metaData.BodyType == BodyType.None)
            {
                OnFailed?.Invoke(FailureType.MetadataParseError, "Failed to parse metadata.");
            }
            else
            {
                OnCompleted?.Invoke(metaData);
            }
        }
    }
}
