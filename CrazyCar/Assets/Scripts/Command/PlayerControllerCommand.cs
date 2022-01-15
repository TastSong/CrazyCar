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
    private ControllerType controllerType;
    private float value;

    public PlayerControllerCommand(ControllerType controllerType, float value) {
        this.controllerType = controllerType;
        this.value = value;
    }

    protected override void OnExecute() {
        MPlayer mPlayer = this.GetSystem<IPlayerManagerSystem>().SelfPlayer;
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