using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public enum GameType {
    TimeTrial = 0,
    Match
}

public interface IGameModel : IModel {
    BindableProperty<bool> SceneLoaded { get; }
    BindableProperty<string> Token { get; }
    GameType CurGameType { get; set; }
    BindableProperty<float> SendMsgOffTime { get; }
    BindableProperty<bool> StandAlone { get; }
    BindableProperty<int> MaxSyncDelay { get; }
    BindableProperty<int> MatchStartGameTime { get; }
}

public class GameModel : AbstractModel, IGameModel {
    public BindableProperty<bool> SceneLoaded { get; } = new BindableProperty<bool>();

    public BindableProperty<string> Token { get; } = new BindableProperty<string>();

    public GameType CurGameType { get; set; }

    public BindableProperty<float> SendMsgOffTime { get; } = new BindableProperty<float>();

    public BindableProperty<bool> StandAlone { get; } = new BindableProperty<bool>();

    public BindableProperty<int> MaxSyncDelay { get; } = new BindableProperty<int>();

    public BindableProperty<int> MatchStartGameTime { get; } = new BindableProperty<int>();

    protected override void OnInit() {
        SceneLoaded.Value = false;
        CurGameType = GameType.TimeTrial;
        SendMsgOffTime.Value = 0.4f;
        StandAlone.Value = false;
        MaxSyncDelay.Value = 4000;
        MatchStartGameTime.Value = 16;
    }
}
