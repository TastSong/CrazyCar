using TFramework;
public class ChangeCarCommand : AbstractCommand{
    private readonly EquipInfo mEquipInfo;

    public ChangeCarCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        this.GetSystem<IIndexCarSystem>().MPlayerStyle.ChangeEquip(EquipType.Car, mEquipInfo.eid, mEquipInfo.rid);
        this.SendEvent(new ChangeCarEvent(mEquipInfo));
    }
}
