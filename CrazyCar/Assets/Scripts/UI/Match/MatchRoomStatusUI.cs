using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using UnityEngine.UI;
using Utils;

public class MatchRoomStatusUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Button startBtn;
    public GameObject waitingText;
    public MatchRoomPlayerItem[] playerItems;
    public Button mapBtn;
    public MatchRoomMapUI mapUI;

    private int maxNum = 1;
    private Coroutine getRoomStatusCor;

    private void Awake() {
        this.RegisterEvent<MatchRoomUpdateStatusEvent>(OnMatchRoomUpdateStatus).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<MatchRoomStartEvent>(OnMatchRoomStart).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<MatchRoomExitEvent>(OnMatchRoomExit).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnEnable() {
        startBtn.gameObject.SetActiveFast(this.GetModel<IMatchModel>().IsHouseOwner);
        mapBtn.gameObject.SetActiveFast(this.GetModel<IMatchModel>().IsHouseOwner);
        waitingText.SetActiveFast(!this.GetModel<IMatchModel>().IsHouseOwner);
        if (getRoomStatusCor != null) {
            StopCoroutine(getRoomStatusCor);
        }
        StartCoroutine(GetRoomStatus());
    }

    private IEnumerator GetRoomStatus() {
        while (true) {
            this.GetSystem<IMatchRoomSystem>().MatchRoomStatus();
            yield return new WaitForSeconds(4.0f);
        }
    }

    private void Start() {
        startBtn.onClick.AddListener(() => {
            if (this.GetModel<IMatchModel>().MemberInfoDic.Count >= maxNum) {
                if (IsLegalMap()) {
                    this.GetSystem<IMatchRoomSystem>().MatchRoomStart();
                } else {
                    this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("This map requires all player vehicles to be able to wade")));
                }
            } else {
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Other players are not in position")));
            }  
        });

        closeBtn.onClick.AddListener(() => {
            this.GetSystem<IMatchRoomSystem>().MatchRoomEixt();
        });

        mapBtn.onClick.AddListener(() => {
            mapUI.gameObject.SetActiveFast(true);
        });
    }

    private bool IsLegalMap() {
        if (this.GetModel<IMatchModel>().SelectInfo.Value.hasWater) {
            foreach (var item in this.GetModel<IMatchModel>().MemberInfoDic) {
                if (!item.Value.canWade) {
                    return false;
                }
            }
            return true;
        } else {
            return true;
        }
    }

    private void OnMatchRoomUpdateStatus(MatchRoomUpdateStatusEvent e) {
        List<MatchRoomMemberInfo> infos = new List<MatchRoomMemberInfo>(this.GetModel<IMatchModel>().MemberInfoDic.Values);
        for (int i = 0; i < playerItems.Length; i++) {
            if (i < infos.Count) {
                playerItems[i].SetContent(infos[i]);
            } else {
                playerItems[i].CleanItem();
            }
        }
    }

    private void OnMatchRoomExit(MatchRoomExitEvent e) {
        if (getRoomStatusCor != null) {
            StopCoroutine(getRoomStatusCor);
        }
        this.GetSystem<IWebSocketSystem>().CloseConnect();
        gameObject.SetActiveFast(false);
    }

    private void OnMatchRoomStart(MatchRoomStartEvent e) {
        if (getRoomStatusCor != null) {
            StopCoroutine(getRoomStatusCor);
        }
        var matchInfo = this.GetModel<IMatchModel>().SelectInfo;
        this.GetSystem<INetworkSystem>().EnterRoom(GameType.Match, matchInfo.Value.cid, () => {
            this.SendCommand(new EnterMatchCommand(matchInfo));
        });
    }

    private void OnDestroy() {
        this.GetSystem<IWebSocketSystem>().CloseConnect();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
