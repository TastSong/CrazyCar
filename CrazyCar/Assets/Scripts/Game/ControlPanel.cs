using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class ControlPanel : MonoBehaviour, IController {
    public Button exitBtn;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;

    private void OnEnable() {
        if (!this.GetModel<IGameControllerModel>().SceneLoaded.Value) {
            return;
        }     
    }

    private void Start() {
        exitBtn.onClick.AddListener(() => {
            Time.timeScale = 0;
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(content: this.GetSystem<II18NSystem>().GetText("Quit the game?"),
                success: () => {
                    Time.timeScale = 1;
                    Util.LoadingScene(SceneID.Index);
                },
                fail: () => {
                    Time.timeScale = 1;
                });
        });

        frontBtn.SetClick((float time) => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.vInput = 1;
        });
        backBtn.SetClick((float time) => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.vInput = -1;
        });
        leftBtn.SetClick((float time) => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.hInput = -Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.hInput = 0;
        });
        rightBtn.SetClick((float time) => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.hInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.hInput = 0;
        });
        spaceBtn.SetClick((float time) => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.sInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.sInput = 0;
        });

    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
