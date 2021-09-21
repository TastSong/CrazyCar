using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utils;

public class UISceneLoadingCtrl : MonoBehaviour {
    public Slider progressSlider;
    public Text progressText;

    private float timer;
    public float minLoadingTime = 3f;

    private void Start() {
        GameController.manager.sceneLoaded = false;
        progressSlider.value = 0;
        progressText.text = "0%";
        GameController.manager.StartCoroutine(LoadScene());
        DontDestroyOnLoad(gameObject);
    }

    private void Update() {
        timer += Time.deltaTime;
    }

    private IEnumerator LoadScene() {
        GameController.manager.sceneLoaded = false;
        progressSlider.value = 0;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        progressSlider.value = 0.1f;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        var async = SceneManager.LoadSceneAsync((int)Util.LoadingTargetSceneID);

        while (timer < minLoadingTime) {
            var maxProgress = (timer / minLoadingTime);
            progressSlider.value = maxProgress;
            progressText.text = (int)(maxProgress * 100) + "%";
            yield return null;
        }

        while (!async.isDone) {
            progressSlider.value = Mathf.Min(async.progress, async.progress);
            progressText.text = (int)(progressSlider.value * 100) + "%";
            yield return null;
        }
        // 2019加载完场景并不能直接显示
        Destroy(gameObject);
        yield return new WaitForSeconds(1.8f);
        GameController.manager.sceneLoaded = true;
        GameController.manager.tinyMsgHub.Publish(new InitGameUIMsg());
    }
}