using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using Coffee.UIExtensions;

public class InputSystemPanel : MonoBehaviour, IController {
    public GameObject uiController;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;
    public UIShiny xboxConnect;
    public UIDissolve xboxDisconnect;

    private bool isUseKeyboard = false;
    private bool isConnectXBOX = false;
    private bool curIsConnectXBOX = false;

    private bool IsStartGame {
        get {
            if (this.GetModel<IGameControllerModel>().CurGameType == GameType.TimeTrial) {
                return this.GetModel<ITimeTrialModel>().IsStartGame;
            } else if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
                return this.GetModel<IMatchModel>().IsStartGame;
            }
            return false;
        }
    }

    private void Start() {
        frontBtn.SetClick((float time) => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 1));
        });
        backBtn.SetClick((float time) => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, -1));
        });
        leftBtn.SetClick((float time) => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, -Mathf.Clamp01(Time.fixedTime - time)));
        }, () => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
        });
        rightBtn.SetClick((float time) => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, Mathf.Clamp01(Time.fixedTime - time)));
        }, () => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
        });
        spaceBtn.SetClick((float time) => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, Mathf.Clamp01(Time.fixedTime - time)));
        }, () => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, -1));
        });

    }

    [Obsolete]
    private void Update() {
        if (Input.GetKeyDown(KeyCode.K)) {
            isUseKeyboard = !isUseKeyboard;
        }

        if (isUseKeyboard && IsStartGame) {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, Input.GetAxisRaw("Vertical")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, Input.GetAxisRaw("Horizontal")));
            
            if (Input.GetKey(KeyCode.Space)) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, 1));
            }

            if (Input.GetKeyUp(KeyCode.Space)) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, -1));
            }
        }

        isConnectXBOX = (Input.GetJoystickNames().Length > 0 && Input.GetJoystickNames()[0] != "");

        if (isConnectXBOX != curIsConnectXBOX) {
            curIsConnectXBOX = isConnectXBOX;
            if (curIsConnectXBOX) {
                uiController.SetActiveFast(false);
                PlayConnectAnim();
            } else {
                uiController.SetActiveFast(true);
                PlayDisconnectAnim();
            }
        }

        if (isConnectXBOX && IsStartGame) {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, Input.GetAxisRaw("XBOX_Vertical_Left")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, Input.GetAxisRaw("XBOX_Horizontal_Right")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, Input.GetAxis("XBOX_LRT")));
        }
    }

    [Obsolete]
    private void PlayConnectAnim() {
        xboxConnect.gameObject.SetActiveFast(true);
        float time = xboxConnect.duration + 1;
        Util.DelayExecuteWithSecond(time, () => { 
            xboxConnect.gameObject.SetActiveFast(false);
            xboxConnect.effectFactor = 0;
            xboxConnect.play = true;
        });
    }

    [Obsolete]
    private void PlayDisconnectAnim() {
        xboxDisconnect.gameObject.SetActiveFast(true);
        float time = xboxDisconnect.duration + 1;
        Util.DelayExecuteWithSecond(time, () => {
            xboxDisconnect.gameObject.SetActiveFast(false);
            xboxDisconnect.effectFactor = 0;
            xboxDisconnect.play = true;
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
