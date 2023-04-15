using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;

public enum GameType {
    TimeTrial = 0,
    Match
}

public interface IGameModel : IModel {
    public BindableProperty<bool> SceneLoaded { get; }
    public BindableProperty<bool> SceneLoading { get; }
    public BindableProperty<SceneID> LoadingTargetSceneID { get; }
    public BindableProperty<string> Token { get; }
    public GameType CurGameType { get; set; }
    public BindableProperty<float> SendMsgOffTime { get; }
    public BindableProperty<int> ReconnectionTimeout { get; }  // 重连超时
    public BindableProperty<bool> StandAlone { get; }
    public BindableProperty<int> MaxSyncDelay { get; }
    public BindableProperty<int> MatchStartGameTime { get; }
}

public class GameModel : AbstractModel, IGameModel {
    public BindableProperty<bool> SceneLoaded { get; } = new BindableProperty<bool>();
    public BindableProperty<bool> SceneLoading { get; } = new BindableProperty<bool>();
    public BindableProperty<SceneID> LoadingTargetSceneID { get; } = new BindableProperty<SceneID>();
    public BindableProperty<string> Token { get; } = new BindableProperty<string>();

    public GameType CurGameType { get; set; }

    public BindableProperty<float> SendMsgOffTime { get; } = new BindableProperty<float>();
    public BindableProperty<int> ReconnectionTimeout { get; } = new BindableProperty<int>();

    public BindableProperty<bool> StandAlone { get; } = new BindableProperty<bool>();

    public BindableProperty<int> MaxSyncDelay { get; } = new BindableProperty<int>();

    public BindableProperty<int> MatchStartGameTime { get; } = new BindableProperty<int>();

    protected override void OnInit() {
        SceneLoaded.Value = false;
        CurGameType = GameType.TimeTrial;
        SendMsgOffTime.Value = 0.4f;
        ReconnectionTimeout.Value = 144;
        StandAlone.Value = false;
        MaxSyncDelay.Value = 4000;
        MatchStartGameTime.Value = 16;
    }
}
