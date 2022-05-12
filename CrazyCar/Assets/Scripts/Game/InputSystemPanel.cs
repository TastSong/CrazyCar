using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class InputSystemPanel : MonoBehaviour, IController {
    public GameObject uiController;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;
    public GameObject xboxConnect;
    public GameObject xboxDisconnect;

    private bool isUseKeyboard = false;
    private bool isConnectXBOX = false;
    private bool curIsConnectXBOX = false;

    private bool IsStartGame {
        get {
            if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
                return this.GetModel<ITimeTrialModel>().IsStartGame;
            } else if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
                return this.GetModel<IMatchModel>().IsStartGame;
            }
            return false;
        }
    }

    private void Start() {
        frontBtn.SetClick(() => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 1));
        });
        backBtn.SetClick(() => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, -1));
        });
        leftBtn.SetClick(() => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, -1));
        }, () => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
        });
        rightBtn.SetClick(() => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 1));
        }, () => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
        });
        spaceBtn.SetClick(() => {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, 1));
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
            if (Input.GetAxisRaw("Vertical") > 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 1));
            } else if (Input.GetAxisRaw("Vertical") < 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, -1));
            } else {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 0));
            }

            if (Input.GetAxisRaw("Horizontal") > 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 1));
            } else if (Input.GetAxisRaw("Horizontal") < 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, -1));
            } else {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
            }

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
            if (Input.GetAxis("XBOX_Vertical_Left") > 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 1));
            } else if (Input.GetAxis("XBOX_Vertical_Left") < 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, -1));
            } else {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, 0));
            }

            if (Input.GetAxis("XBOX_Horizontal_Right") > 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 1));
            } else if (Input.GetAxis("XBOX_Horizontal_Right") < 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, -1));
            } else {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, 0));
            }

            if (Input.GetAxis("XBOX_LRT") > 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, 1));
            } else if (Input.GetAxis("XBOX_LRT") < 0) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, -1));
            } else {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, 0));
            }
        }
    }

    [Obsolete]
    private void PlayConnectAnim() {
        xboxConnect.gameObject.SetActiveFast(true);
        float time = 1;
        Util.DelayExecuteWithSecond(time, () => {
            xboxConnect.gameObject.SetActiveFast(false);
        });
    }

    [Obsolete]
    private void PlayDisconnectAnim() {
        xboxDisconnect.gameObject.SetActiveFast(true);
        float time = 1;
        Util.DelayExecuteWithSecond(time, () => {
            xboxDisconnect.gameObject.SetActiveFast(false);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
