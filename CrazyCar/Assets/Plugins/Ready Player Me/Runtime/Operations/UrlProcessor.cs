using System;
using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using System.Text.RegularExpressions;

namespace ReadyPlayerMe
{
    public class UrlProcessor
    {
        private const string SHORT_CODE_REGEX = "^[A-Z0-9]{6}$";
        private const string SHORT_CODE_URL_REGEX = "^(https://readyplayer.me/api/avatar/)[A-Z0-9]{6}$";
        private const string URL_REGEX = "^(https://)[a-z0-9.]*[/][a-z0-9-]*(.glb)$";

        private const string SHORT_CODE_BASE_URL = "https://readyplayer.me/api/avatar";
        
        public string LocalDirectory { get; set; }
        public static readonly string EditorDefaultLocalDirectory = $"{Application.dataPath}/Avatars";
        public static readonly string RuntimeDefaultLocalDirectory = $"{Application.persistentDataPath}/Avatars";

        public Action<FailureType, string> OnFailed;
        public Action<AvatarUri> OnCompleted;

        public void Create(string url)
        {
            if (Regex.Match(url, SHORT_CODE_REGEX).Length > 0)
            {
                GetUrlFromShortCode(url).Run();
            }
            else if (Regex.Match(url, SHORT_CODE_URL_REGEX).Length > 0)
            {
                GetUrlFromShortCode(url.Substring(url.Length - 6)).Run();
            }
            else if (Regex.Match(url, URL_REGEX).Length > 0)
            {
                CreateFromUrl(url);
            }
            else
            {
                OnFailed?.Invoke(FailureType.UrlProcessError, "Invalid avatar URL or short code.");
            }
        }

        private void CreateFromUrl(string url)
        {
            if (LocalDirectory == null)
            {
                #if UNITY_EDITOR
                    Debug.LogWarning("UrlProcessor.CreateFromUrl: LocalDirectory for local paths is not set. Defaulting to EditorDefaultLocalDirectory");
                    LocalDirectory = EditorDefaultLocalDirectory;
                #else
                    Debug.LogWarning("UrlProcessor.CreateFromUrl: LocalDirectory for local paths is not set. Defaulting to RuntimeDefaultLocalDirectory");
                    LocalDirectory = RuntimeDefaultLocalDirectory;
                #endif
            }
            
            try
            {
                var avatarUri = new AvatarUri();
                var fractions = url.Split(new []{'/', '.'});
                
                avatarUri.Guid = fractions[fractions.Length - 2];;
                avatarUri.ModelUrl = url;
                avatarUri.LocalModelPath = $"{LocalDirectory}/{avatarUri.Guid}.glb";
                avatarUri.MetadataUrl = url.Replace(".glb", ".json");
                avatarUri.LocalMetadataPath = $"{LocalDirectory}/{avatarUri.Guid}.json";
                
                OnCompleted?.Invoke(avatarUri);
            }
            catch(Exception e)
            {
                OnFailed?.Invoke(FailureType.UrlProcessError, $"Invalid avatar URL. {e.Message}");
            }
        }

        private IEnumerator GetUrlFromShortCode(string shortCode)
        {
            using (var request = UnityWebRequest.Get($"{SHORT_CODE_BASE_URL}/{shortCode}"))
            {
                yield return request.SendWebRequest();

                if (request.isHttpError || request.isNetworkError)
                {
                    OnFailed?.Invoke(FailureType.ShortCodeError, $"Invalid avatar short code. {request.error}");
                }
                else
                {
                    CreateFromUrl(request.url);
                }
            }
        }
    }
}
