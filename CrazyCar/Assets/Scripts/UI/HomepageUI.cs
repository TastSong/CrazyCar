using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HomepageUI : MonoBehaviour {
    public Button avatarBtn;

    private void Start() {
        avatarBtn.onClick.AddListener(() => {
            UIManager.instance.ShowPage(UIPageType.AvatarUI);
        });
    }
}

