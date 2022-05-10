using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using UnityEngine.UI;
using Utils;

public class MatchRoomStatusUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Button startBtn;
    public MatchRoomPlayerItem[] playerItems;

    private Coroutine updateStatusCor;
    private int maxNum = 2;

    private void OnEnable() {
        startBtn.gameObject.SetActiveFast(this.GetModel<IMatchModel>().IsHouseOwner);
        if (updateStatusCor != null) {
            StopCoroutine(updateStatusCor);
        }
        StartCoroutine(UpdateStatus());
    }

    private void Start() {
        startBtn.onClick.AddListener(() => {
            if (this.GetModel<IMatchModel>().MemberInfoDic.Count >= maxNum) {
                this.GetSystem<IMatchRoomSystem>().MatchRoomStart();
            } else {
                this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Other players are not in position")));
            }  
        });

        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });

        this.RegisterEvent<MatchRoomStartEvent>(OnMatchRoomStart).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnMatchRoomStart(MatchRoomStartEvent e) {
        if (updateStatusCor != null) {
            StopCoroutine(updateStatusCor);
        }
        var matchInfo = this.GetModel<IMatchModel>().SelectInfo;
        this.GetSystem<INetworkSystem>().EnterRoom(GameType.Match, matchInfo.Value.cid, () => {
            this.SendCommand(new EnterMatchCommand(matchInfo));
        });
    }

    private IEnumerator UpdateStatus() {
        while (true) {
            this.GetSystem<IMatchRoomSystem>().MatchRoomStatus();
            yield return new WaitForSeconds(1.0f);
            
            List<MatchRoomMemberInfo> infos = new List<MatchRoomMemberInfo>(this.GetModel<IMatchModel>().MemberInfoDic.Values);
            for (int i = 0; i < playerItems.Length; i++) {
                if (i < infos.Count) {
                    playerItems[i].SetContent(infos[i]);
                } else {
                    playerItems[i].CleanItem();
                }
            }
        }
    }

    private void OnDisable() {
        this.GetSystem<IMatchRoomSystem>().MatchRoomEixt();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
