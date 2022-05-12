using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public enum ControllerType {
    Horizontal = 0,
    Vertical,
    Speed
}

class PlayerControllerCommand : AbstractCommand {
    private int uid;
    private ControllerType controllerType;
    private int value;

    public PlayerControllerCommand(int uid, ControllerType controllerType, int value) {
        this.uid = uid;
        this.controllerType = controllerType;
        this.value = value;
    }

    protected override void OnExecute() {
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            this.SendCommand<PostPlayerOperatMsgCommand>(new PostPlayerOperatMsgCommand(controllerType, value));
        }

        MPlayer mPlayer;
        if (uid == this.GetSystem<IPlayerManagerSystem>().SelfPlayer.userInfo.uid) {
            mPlayer = this.GetSystem<IPlayerManagerSystem>().SelfPlayer;
        } else {
            Debug.LogError("+++++++ uid = " + uid + " controllerType = " + controllerType + " valus " + value);
            mPlayer = this.GetSystem<IPlayerManagerSystem>().peers[uid];
        }
        
        if (controllerType == ControllerType.Horizontal) {
            mPlayer.hInput = value;
        } else if (controllerType == ControllerType.Vertical) {
            mPlayer.vInput = value;
        } else if (controllerType == ControllerType.Speed){
            if (value > 0) {
                if (mPlayer.currentForce > 0 && mPlayer.isGround && !mPlayer.isDrifting && mPlayer.rig.velocity.sqrMagnitude > 10) {
                    mPlayer.StartDrift();
                }
            } else {
                if (mPlayer.isDrifting) {
                    mPlayer.Boost(mPlayer.boostForce);
                    mPlayer.StopDrift();
                }
            }
        }
    }
}