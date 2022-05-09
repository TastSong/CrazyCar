using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.UI;

public class MatchRoomUI : MonoBehaviour, IController {
    public Button closeBtn;
    public InputField inputField;
    public Button createBtn;
    public Button joinBtn;
    public MatchRoomStatusUI statusUI;

    private void OnEnable() {
        createBtn.interactable = true;
        joinBtn.interactable = true;
        statusUI.gameObject.SetActiveFast(false);
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });

        createBtn.onClick.AddListener(() => {
            if (inputField.text.Length == 4) {
                createBtn.interactable = false;
                this.GetModel<IMatchModel>().RoomId.Value = inputField.text;
                this.GetSystem<IMatchRoomSystem>().MatchRoomCreate();
            } else {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Please enter a 4-digit room number"));
            }
        });

        joinBtn.onClick.AddListener(() => {
            if (inputField.text.Length == 4) {
                joinBtn.interactable = false;
                this.GetModel<IMatchModel>().RoomId.Value = inputField.text;
                this.GetSystem<IMatchRoomSystem>().MatchRoomJoin();
            } else {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Please enter a 4-digit room number"));
            }
        });

        this.RegisterEvent<MatchRoomCreateOrJoinSuccEvent>(OnMatchRoomCreateOrJoinSucc).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnMatchRoomCreateOrJoinSucc(MatchRoomCreateOrJoinSuccEvent e) {
        statusUI.gameObject.SetActiveFast(true);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
