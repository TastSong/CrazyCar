using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public enum GameType {
    TimeTrial = 0,
    Match
}

public interface IGameControllerModel : IModel {
    BindableProperty<bool> SceneLoaded { get; }
    BindableProperty<string> Token { get; }
    GameType CurGameType { get; set; }
    BindableProperty<float> SendMsgOffTime { get; }
    BindableProperty<bool> StandAlone { get; }
}

public class GameControllerModel : AbstractModel, IGameControllerModel {
    public BindableProperty<bool> SceneLoaded { get; } = new BindableProperty<bool>();

    public BindableProperty<string> Token { get; } = new BindableProperty<string>();

    public GameType CurGameType { get; set; }

    public BindableProperty<float> SendMsgOffTime { get; } = new BindableProperty<float>();

    public BindableProperty<bool> StandAlone { get; } = new BindableProperty<bool>();

    protected override void OnInit() {
        SceneLoaded.Value = false;
        CurGameType = GameType.TimeTrial;
        SendMsgOffTime.Value = 0.1f;
        StandAlone.Value = false;
    }
}
