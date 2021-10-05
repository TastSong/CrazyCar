using System;
using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class ControlPanel : MonoBehaviour {
    public Button exitBtn;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;

    private void OnEnable() {
        if (!GameController.manager.sceneLoaded) {
            return;
        }     
    }

    private void Start() {
        exitBtn.onClick.AddListener(() => {
            Time.timeScale = 0;
            GameController.manager.infoConfirmAlert.ShowWithText(content: "是否退出游戏",
                success: () => {
                    Time.timeScale = 1;
                    Util.LoadingScene(SceneID.Index);
                },
                fail: () => {
                    Time.timeScale = 1;
                });
        });

        frontBtn.SetClick((float time) => {
            PlayerManager.manager.GetSelfPlayer.vInput = 1;
        });
        backBtn.SetClick((float time) => {
            PlayerManager.manager.GetSelfPlayer.vInput = -1;
        });
        leftBtn.SetClick((float time) => {
            PlayerManager.manager.GetSelfPlayer.hInput = -Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            PlayerManager.manager.GetSelfPlayer.hInput = 0;
        });
        rightBtn.SetClick((float time) => {
            PlayerManager.manager.GetSelfPlayer.hInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            PlayerManager.manager.GetSelfPlayer.hInput = 0;
        });
        spaceBtn.SetClick((float time) => {
            PlayerManager.manager.GetSelfPlayer.sInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            PlayerManager.manager.GetSelfPlayer.sInput = 0;
        });

    }
}
