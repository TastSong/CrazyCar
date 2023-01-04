using UnityEngine;
using Siccity.GLTFUtility;

namespace ReadyPlayerMe
{
    public class RuntimeExample : MonoBehaviour
    {
        [SerializeField]
        private string avatarUrl = "https://d1a370nemizbjq.cloudfront.net/209a1bc2-efed-46c5-9dfd-edc8a1d9cbe4.glb";

        private void Start()
        {
            Debug.Log($"Started loading avatar. [{Time.timeSinceLevelLoad:F2}]");

            var avatarLoader = new AvatarLoader();
            avatarLoader.OnCompleted += (sender, args) =>
            {
                Debug.Log($"Loaded avatar. [{Time.timeSinceLevelLoad:F2}]");
            };
            avatarLoader.OnFailed += (sender, args) =>
            {
                Debug.Log(args.Type);
            };
            
            avatarLoader.LoadAvatar(avatarUrl);
        }
    }
}
