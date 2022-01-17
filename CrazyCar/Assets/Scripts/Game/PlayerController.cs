using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;


public class PlayerController : MonoBehaviour, IController {
    public MPlayer mPlayerPrefab;
    public Transform startPos;
    public Transform  cinemachineTF;

    private float widthUnit = 1.6f;

    private void Start() {
        this.RegisterEvent<MakeNewPlayerEvent>(OnMakeNewPlayer);
        MakeSelfPlayer();       
    }

    private void MakeSelfPlayer() {       
        this.GetSystem<IPlayerManagerSystem>().SelfPlayer = Instantiate(mPlayerPrefab, GetStartPosition(), Quaternion.identity);
        MPlayer selfPlayer = this.GetSystem<IPlayerManagerSystem>().SelfPlayer;
        selfPlayer.transform.SetParent(transform, false);
        selfPlayer.userInfo = this.SendQuery(new UserInfoQuery());
        selfPlayer.UpdateSelfParameter();
        selfPlayer.GetComponent<MPlayerStyle>().ChangeEquip(EquipType.Car,
            this.GetModel<IUserModel>().EquipInfo.Value.eid,
            this.GetModel<IUserModel>().EquipInfo.Value.rid);
        cinemachineTF.SetParent(selfPlayer.transform, false);
        selfPlayer.GetComponent<MPlayerStyle>().SetNameText(this.GetModel<IUserModel>().Name.Value, this.GetModel<IUserModel>().IsVIP.Value);
    }

    private void OnMakeNewPlayer(MakeNewPlayerEvent e) {
        UserInfo userInfo = e.playerStateMsg.userInfo;
        MPlayer mPlayer = Instantiate(mPlayerPrefab, e.playerStateMsg.pos, Quaternion.identity);
        mPlayer.transform.SetParent(transform, false);
        mPlayer.userInfo = userInfo;
        mPlayer.GetComponent<MPlayerStyle>().ChangeEquip(EquipType.Car,
            e.playerStateMsg.userInfo.equipInfo.eid,
            e.playerStateMsg.userInfo.equipInfo.rid);
        this.GetSystem<IPlayerManagerSystem>().peers.Add(userInfo.uid, mPlayer);
        mPlayer.GetComponent<MPlayerStyle>().SetNameText(userInfo.name, userInfo.isVIP);
    }

    private Vector3 GetStartPosition() {
        Vector3 pos = new Vector3();
        double num = this.GetModel<IRoomMsgModel>().Num;
        if (num % 2 == 0) {
            pos = startPos.position + new Vector3((int)(num / 2 * widthUnit), 0, 0);
        } else {
            pos = startPos.position - new Vector3((int)(Math.Ceiling(num / 2) * widthUnit), 0, 0);
        }
        Debug.Log("+++ num = " + num + "  num/2 = " + (int)(Math.Ceiling(num / 2)) + "  position = " + startPos.position.x);
        return pos;
    }

    private void OnDestroy() {
        this.UnRegisterEvent<MakeNewPlayerEvent>(OnMakeNewPlayer);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
