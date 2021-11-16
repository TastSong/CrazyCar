using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace AmazingAssets.WireframeShader.Example {
    public class AmazingAssetsLoadScene : MonoBehaviour {
        public static AmazingAssetsLoadScene manager = null;
        public Button preBtn;
        public Button nextBtn;

        private void Awake() {
            if (manager == null) {
                DontDestroyOnLoad(gameObject);
                manager = this;
            } else if (manager != this) {
                Destroy(gameObject);
            }
        }

        private void Start() {
            int count = SceneManager.sceneCountInBuildSettings;
            preBtn.onClick.AddListener(() => {           
                SceneManager.LoadSceneAsync((SceneManager.GetActiveScene().buildIndex - 1) % count);
            }); 

            nextBtn.onClick.AddListener(() => {              
                SceneManager.LoadSceneAsync((SceneManager.GetActiveScene().buildIndex + 1) % count);
            });
        }
    }
}
