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
        ResetUI();
        statusUI.gameObject.SetActiveFast(false);
    }

    private void ResetUI() {
        createBtn.interactable = true;
        joinBtn.interactable = true;
        inputField.text = "";
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
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Please enter a 4-digit room number")));
                ResetUI();
            }
        });

        joinBtn.onClick.AddListener(() => {
            if (inputField.text.Length == 4) {
                joinBtn.interactable = false;
                this.GetModel<IMatchModel>().RoomId.Value = inputField.text;
                this.GetSystem<IMatchRoomSystem>().MatchRoomJoin();
            } else {
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Please enter a 4-digit room number")));
                ResetUI();
            }
        });

        this.RegisterEvent<MatchRoomCreateOrJoinSuccEvent>(OnMatchRoomCreateOrJoinSucc).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<MatchRoomCreateOrJoinFailEvent>(OnMatchRoomCreateOrJoinFail).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnMatchRoomCreateOrJoinSucc(MatchRoomCreateOrJoinSuccEvent e) {
        ResetUI();
        statusUI.gameObject.SetActiveFast(true);
    }

    private void OnMatchRoomCreateOrJoinFail(MatchRoomCreateOrJoinFailEvent e) {
        ResetUI();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
