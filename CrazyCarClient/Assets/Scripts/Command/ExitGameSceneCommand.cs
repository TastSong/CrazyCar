using LitJson;
using System.Text;
using UnityEngine;
using QFramework;
using Utils;

public class ExitGameSceneCommand : AbstractCommand
{
    protected override void OnExecute()
    {
        Time.timeScale = 0;
        InfoConfirmInfo info = new InfoConfirmInfo(content: "Quit the game?",
            success: () => {
                this.SendEvent<ExitGameSceneEvent>();
                this.GetSystem<IPlayerManagerSystem>().peers.Clear();
                Time.timeScale = 1;
                this.SendCommand(new LoadSceneCommand(SceneID.Index));
            },
            fail: () => {
                Time.timeScale = 1;
            });
        this.SendCommand(new ShowPageCommand(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
    }
}
