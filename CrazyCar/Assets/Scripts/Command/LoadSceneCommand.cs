using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.SceneManagement;

public class LoadSceneCommand : AbstractCommand {
    private SceneID mSceneID;
    public LoadSceneCommand(SceneID sceneID) {
        mSceneID = sceneID;
    }

    protected override void OnExecute() {
        this.GetModel<IGameModel>().LoadingTargetSceneID.Value = mSceneID;
        SceneManager.LoadScene((int)SceneID.Loading);
    }
}
