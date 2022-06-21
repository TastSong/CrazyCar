using System;
using System.IO;
using UnityEngine;
using Object = UnityEngine.Object;

namespace ReadyPlayerMe
{
    public class AvatarLoader
    {
        public event EventHandler<FailureEventArgs> OnFailed;
        public event EventHandler<ProgressChangeEventArgs> OnProgressChanged;
        public event EventHandler<CompletionEventArgs> OnCompleted;

        public IAvatarImporter AvatarImporter { get; set; }
        public bool UseAvatarCaching { get; set; }
        public string LocalDirectory { get; set; }

        private string avatarUrl;
        private AvatarUri avatarUri;
        private AvatarMetadata avatarMetadata;

        // TODO: add the messages here
        private void Failed(FailureType type, string message)
        {
            OnFailed?.Invoke(this, new FailureEventArgs()
            {
                Type = type,
                Url = avatarUrl,
                Message = message
            });
        }

        private void ProgressChanged(float progress, ProgressType type)
        {
            OnProgressChanged?.Invoke(this, new ProgressChangeEventArgs()
            {
                Type = type,
                Url = avatarUrl,
                Progress = progress
            });
        }
        
        public void LoadAvatar(string url)
        {
            ProgressChanged(0, ProgressType.LoaderStarted);
            
            avatarUrl = url;
            
            ProcessUrl(url);
        }
        
        [Obsolete("Use AvatarLoader with OnFailed, OnProgress and OnCompleted event handlers.")]
        public void LoadAvatar(string url, Action<GameObject> onAvatarImported = null, Action<GameObject, AvatarMetadata> onAvatarLoaded = null)
        {
            ProgressChanged(0, ProgressType.LoaderStarted);
            
            avatarUrl = url;
            
            ProcessUrl(url);

            OnCompleted += (sender, args) =>
            {
                onAvatarImported(args.Avatar);
                onAvatarLoaded(args.Avatar, avatarMetadata);
            };
        }

        private void ProcessUrl(string url)
        {
            var urlProcessor = new UrlProcessor();
            urlProcessor.LocalDirectory = LocalDirectory;
            urlProcessor.OnFailed = Failed;
            urlProcessor.OnCompleted = (uri) =>
            {
                ProgressChanged(0.1f, ProgressType.UrlProcessed);
                DownloadMetadata(uri);
            };
            urlProcessor.Create(url);
        }

        private void DownloadMetadata(AvatarUri uri)
        {
            avatarUri = uri;
            var metadataDownloader = new MetadataDownloader();
            metadataDownloader.OnFailed = Failed;
            metadataDownloader.OnCompleted = (metadata) =>
            {
                ProgressChanged(0.2f, ProgressType.MetadataDownloaded);
                DownloadModel(metadata);
            };

            if (!UseAvatarCaching || !File.Exists(uri.LocalMetadataPath))
            {
                #if UNITY_EDITOR
                    metadataDownloader.DownloadIntoFile(avatarUri.MetadataUrl, avatarUri.LocalMetadataPath).Run();
                #else
                    metadataDownloader.DownloadIntoMemory(avatarUri.MetadataUrl).Run();
                #endif
            }
            else
            {
                Debug.Log("Loading metadata from cache.");
                var json = File.ReadAllText(uri.LocalMetadataPath);
                metadataDownloader.LoadMetaData(json);
            }
        }

        private void DownloadModel(AvatarMetadata metadata)
        {
            avatarMetadata = metadata;
            var avatarDownloader = new AvatarDownloader();
            avatarDownloader.OnFailed = Failed;
            avatarDownloader.OnProgressChanged = (progress) =>
            {
                // model download progress between 0.2 to 0.55
                var scaledProgress = progress * 0.35f + 0.2f;
                ProgressChanged(scaledProgress, ProgressType.ModelDownloaded);
            };
            avatarDownloader.OnCompleted = ImportModel;

            if (!UseAvatarCaching || !File.Exists(avatarUri.LocalModelPath))
            {
                #if UNITY_EDITOR
                    avatarDownloader.DownloadIntoFile(avatarUri.ModelUrl, avatarUri.LocalModelPath).Run();
                #else
                    avatarDownloader.DownloadIntoMemory(avatarUri.ModelUrl).Run();
                #endif
            }
            else
            {
                Debug.Log("Loading avatar model from cache.");
                var bytes = File.ReadAllBytes(avatarUri.LocalModelPath);
                ImportModel(bytes);
            }
        }

        private void ImportModel(byte[] avatarBytes)
        {
            var importer = AvatarImporter ?? new GltfUtilityAvatarImporter();
            importer.OnFailed = Failed;
            importer.OnProgressChanged = (progress) =>
            {
                // model download progress between 0.55 to 0.9
                var scaledProgress = progress * 0.35f + 0.55f;
                ProgressChanged(scaledProgress, ProgressType.ModelImported);
            };
            importer.OnCompleted = PrepareAvatar;

            #if UNITY_EDITOR
                importer.Import(avatarUri.LocalModelPath);
            #else
                importer.Import(avatarBytes);
            #endif
        }
        
        private void PrepareAvatar(GameObject avatar)
        {
            var name = $"Avatar-{avatarUri.Guid}";
            
            var oldInstance = GameObject.Find(name);
            if (oldInstance)
            {
                Object.DestroyImmediate(oldInstance);
            }

            avatar.name = name;

            var processor = new AvatarProcessor();
            processor.ProcessAvatar(avatar, avatarMetadata.OutfitGender);
            processor.OnFailed = Failed;
            OnCompleted?.Invoke(this, new CompletionEventArgs()
            {
                Avatar = avatar,
                Url = avatarUrl
            });
            ProgressChanged(1f, ProgressType.AvatarLoaded);
        }
    }
}
