using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class InputSystemPanel : MonoBehaviour, IController {
    public Button exitBtn;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;

    private bool isUseKeyboard = false;
    private bool isConnectXBOX = false;
    private bool curIsConnectXBOX = false;

    private void Start() {
        exitBtn.onClick.AddListener(() => {
            Time.timeScale = 0;
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(
                content: this.GetSystem<II18NSystem>().GetText("Quit the game?"),
                success: () => {
                    Time.timeScale = 1;
                    Util.LoadingScene(SceneID.Index);
                },
                fail: () => {
                    Time.timeScale = 1;
                });
        });

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

    private void Update() {
        if (Input.GetKeyDown(KeyCode.K)) {
            isUseKeyboard = !isUseKeyboard;
        }

        if (isUseKeyboard || isConnectXBOX) {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, Input.GetAxisRaw("Vertical")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, Input.GetAxisRaw("Horizontal")));
            
            if (Input.GetKey(KeyCode.Space)) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, 1));
            }

            if (Input.GetKeyUp(KeyCode.Space)) {
                this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, -1));
            }
        }

        isConnectXBOX = (Input.GetJoystickNames()[1] != "");

        if (isConnectXBOX != curIsConnectXBOX) {
            curIsConnectXBOX = isConnectXBOX;
            ShowXBOXAnim(curIsConnectXBOX);
        }

        if (isConnectXBOX) {
            this.SendCommand(new PlayerControllerCommand(ControllerType.Vertical, Input.GetAxisRaw("XBOX_Vertical_Left")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Horizontal, Input.GetAxisRaw("XBOX_Horizontal_Right")));
            this.SendCommand(new PlayerControllerCommand(ControllerType.Speed, Input.GetAxis("XBOX_LRT")));
        }
    }

    private void ShowXBOXAnim(bool isShow) {
        Debug.LogError("++++++isShow = " + isShow);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
