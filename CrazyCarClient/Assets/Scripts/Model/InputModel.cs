
using QFramework;

public interface IInputModel : IModel {
    public BindableProperty<int> IsUseKeyboard { get; }
}

public class InputModel : AbstractModel, IInputModel 
{
    protected override void OnInit() {
        var storage = this.GetUtility <IPlayerPrefsStorage>();
        
        IsUseKeyboard.Value = storage.LoadInt(PrefKeys.isUseKeyboard);
        IsUseKeyboard.Register(v => { 
            storage.SaveInt(PrefKeys.isUseKeyboard, v);
        });
    }

    public BindableProperty<int> IsUseKeyboard { get; set; } = new();
}