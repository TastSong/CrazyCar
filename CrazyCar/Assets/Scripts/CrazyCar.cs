using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class CrazyCar : Architecture<CrazyCar> {
    protected override void Init() {
        RegisterSystem<IPlayerManagerSystem>(new PlayerManagerSystem());
        RegisterSystem<IWebSocketSystem>(new WebSocketSystem());
        RegisterSystem<IScreenEffectsSystem>(new ScreenEffectsSystem());
        RegisterSystem<IIndexCarSystem>(new IndexCarSystem());
        RegisterSystem<INetworkSystem>(new NetworkSystem());
        RegisterSystem<II18NSystem>(new I18NSystem());
        RegisterSystem<IDataParseSystem>(new DataParseSystem());
        RegisterSystem<ISoundSystem>(new SoundSystem());
        RegisterSystem<IVibrationSystem>(new VibrationSystem());
        RegisterSystem<ICheckpointSystem>(new CheckpointSystem());
        RegisterSystem<IKCPSystem>(new KCPSystem());
        RegisterSystem<IAddressableSystem>(new AddressableSystem());
        RegisterSystem<IGuidanceSystem>(new GuidanceSystem());
        RegisterSystem<IMatchRoomSystem>(new MatchRoomSystem());
        RegisterModel<IGameControllerModel>(new GameControllerModel());
        RegisterModel<IUserModel>(new UserModel());
        RegisterModel<IAvatarModel>(new AvatarModel());
        RegisterModel<ITimeTrialModel>(new TimeTrialModel());
        RegisterModel<IMatchModel>(new MatchModel());
        RegisterModel<IEquipModel>(new EquipModel());
        RegisterModel<ISettingsModel>(new SettingsModel());
        RegisterModel<IRoomMsgModel>(new RoomMsgModel());
        RegisterModel<IMapControllerModel>(new MapControllerModel());
        RegisterUtility<IPlayerPrefsStorage>(new PlayerPrefsStorage());
    }
}

