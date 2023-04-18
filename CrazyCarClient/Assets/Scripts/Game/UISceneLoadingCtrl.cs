using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utils;
using QFramework;

public class UISceneLoadingCtrl : MonoBehaviour, IController {
    public Slider progressSlider;
    public Text progressText;

    private float timer;
    public float minLoadingTime = 0.1f;

    private void Start() {
        this.GetModel<IGameModel>().SceneLoading.Value = true;
        this.GetModel<IGameModel>().SceneLoaded.Value = false;
        progressSlider.value = 0;
        progressText.text = "0%";
        CoroutineController.manager.StartCoroutine(LoadScene());
        DontDestroyOnLoad(gameObject);
    }

    private void Update() {
        timer += Time.deltaTime;
    }

    private IEnumerator LoadScene() {
        this.GetModel<IGameModel>().SceneLoaded.Value = false;
        progressSlider.value = 0;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        progressSlider.value = 0.1f;
        progressText.text = (int)(progressSlider.value * 100) + "%";
        var async = SceneManager.LoadSceneAsync((int)this.GetModel<IGameModel>().LoadingTargetSceneID.Value);

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
        yield return new WaitForSeconds(0.1f);
        this.GetModel<IGameModel>().SceneLoaded.Value = true;
        this.GetModel<IGameModel>().SceneLoading.Value = false;
        
        if (this.GetModel<IGameModel>().LoadingTargetSceneID == SceneID.Game) {
            SelectGameUI();
        }
    }
    
    private void SelectGameUI() {
        this.SendCommand(new ShowPageCommand(UIPageType.CommonGameUI, UILevelType.Main));
        this.SendCommand(new ShowPageCommand(UIPageType.InputSystemPanel, UILevelType.Main));
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            this.SendCommand(new ShowPageCommand(UIPageType.MatchGameUI, UILevelType.UIPage));
        } else if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrailGameUI, UILevelType.UIPage));
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}