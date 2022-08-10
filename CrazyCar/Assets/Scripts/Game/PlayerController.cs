using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;


public class PlayerController : MonoBehaviour, IController {
    public MPlayer mPlayerPrefab;
    public Transform cinemachineTF;
    public Transform firstAngle;
    public Transform thirdAngle;

    private float widthUnit = 4.4f;

    private void Start() {
        this.RegisterEvent<MakeNewPlayerEvent>(OnMakeNewPlayer).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ChangeAngleViewEvent>(OnChangeAngleView).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<PeerControllerEvent>(OnPeerController).UnRegisterWhenGameObjectDestroyed(gameObject);
        MakeSelfPlayer();       
    }

    private void MakeSelfPlayer() {       
        this.GetSystem<IPlayerManagerSystem>().SelfPlayer = Instantiate(mPlayerPrefab, GetStartPosition(), Quaternion.identity);
        MPlayer selfPlayer = this.GetSystem<IPlayerManagerSystem>().SelfPlayer;
        selfPlayer.transform.SetParent(transform, false);
        selfPlayer.userInfo = this.SendQuery(new UserInfoQuery());
        selfPlayer.UpdateParameter();
        selfPlayer.GetComponent<MPlayerStyle>().ChangeEquip(this.GetModel<IUserModel>().EquipInfo.Value.eid,
            this.GetModel<IUserModel>().EquipInfo.Value.rid);
        cinemachineTF.SetParent(selfPlayer.transform, false);
        firstAngle.SetParent(selfPlayer.transform, false);
        thirdAngle.SetParent(selfPlayer.transform, false);
        selfPlayer.GetComponent<MPlayerStyle>().SetNameText(this.GetModel<IUserModel>().Name.Value, this.GetModel<IUserModel>().IsVIP.Value);

        // 遮挡透视功能
        Camera.main.GetComponent<EasyObjectsFade>().playerTransform = selfPlayer.GetComponent<Transform>();
    }

    private void OnMakeNewPlayer(MakeNewPlayerEvent e) {
        if (this.GetSystem<IPlayerManagerSystem>().peers.ContainsKey(e.playerCreateMsg.userInfo.uid)) {
            return;
        }
        UserInfo userInfo = e.playerCreateMsg.userInfo;
        MPlayer mPlayer = Instantiate(mPlayerPrefab, e.playerCreateMsg.pos, Quaternion.identity);
        mPlayer.transform.SetParent(transform, false);
        mPlayer.userInfo = userInfo;
        mPlayer.UpdateParameter();
        mPlayer.GetComponent<MPlayerStyle>().ChangeEquip(e.playerCreateMsg.userInfo.equipInfo.eid,
            e.playerCreateMsg.userInfo.equipInfo.rid);
        mPlayer.GetComponent<MPlayerStyle>().SetNameText(userInfo.name, userInfo.isVIP);
        this.GetSystem<IPlayerManagerSystem>().peers.Add(userInfo.uid, mPlayer);
    }

    private void OnChangeAngleView(ChangeAngleViewEvent e) {
        if (e.angleView == AngleView.FirstAngle) {
            cinemachineTF.localPosition = firstAngle.localPosition;
        } else {
            cinemachineTF.localPosition = thirdAngle.localPosition;
        }
    }

    private void OnPeerController(PeerControllerEvent e) {
        this.SendCommand(new ExecuteOperateCommand(e.playerOperatMsg.uid, e.playerOperatMsg.controllerType, e.playerOperatMsg.value));
    }

    private Vector3 GetStartPosition() {
        Vector3 pos = this.GetModel<IMapControllerModel>().StartPos;
        double num = this.GetModel<IRoomMsgModel>().Num;
        if (num % 2 == 0) {
            pos += new Vector3((int)(num / 2 * widthUnit), 0, 0);
        } else {
            
            pos -= new Vector3((int)(Math.Ceiling(num / 2) * widthUnit), 0, 0);
        }
        Debug.Log("+++ num = " + num + "  num/2 = " + (int)(Math.Ceiling(num / 2)) + "  num%2 = " + num % 2 + " startPos.position = " + pos +  "  position = " + pos);
        return pos;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
