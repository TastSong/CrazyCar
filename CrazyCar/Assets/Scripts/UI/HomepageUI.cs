using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;

public class HomepageUI : MonoBehaviour {
    public Button avatarBtn;
    public Image avatarImage;

    private TinyMessageSubscriptionToken homepageToken;

    private void Start() {
        avatarBtn.onClick.AddListener(() => {
            UIManager.instance.ShowPage(UIPageType.AvatarUI);
        });

        UpdataUI();
        homepageToken = GameController.manager.tinyMsgHub.Subscribe<HomepageUIMessage>((m) => { UpdataUI(); });
    }

    private void UpdataUI() {
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(GameController.manager.userInfo.aid.ToString());
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(homepageToken);
    }
}

