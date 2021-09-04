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
        StartCoroutine(LoadScene());
        DontDestroyOnLoad(gameObject);
    }

    private void Update() {
        timer += Time.deltaTime;
    }

    private IEnumerator LoadScene() {
        progressSlider.value = 0;
        progressText.text = progressSlider.value * 100 + "%";
        progressSlider.value = 0.1f;
        progressText.text = progressSlider.value * 100 + "%";
        var async = SceneManager.LoadSceneAsync((int)Util.LoadingTargetSceneID);

        while (timer < minLoadingTime) {
            var maxProgress = (timer / minLoadingTime);
            progressSlider.value = maxProgress;
            progressText.text = maxProgress * 100 + "%";
            yield return null;
        }

        while (!async.isDone) {
            progressSlider.value = Mathf.Min(async.progress, async.progress);
            progressText.text = progressSlider.value * 100 + "%";
            yield return null;
        }
        yield return new WaitForSeconds(3.0f);
        GameController.manager.sceneLoaded = true;
        Destroy(gameObject);
    }
}