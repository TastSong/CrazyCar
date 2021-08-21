using System;
using System.Collections;
using UnityEditor.SceneManagement;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class SaveModiedSceneTask : TestTaskBase
    {
        internal Func<bool> SaveCurrentModifiedScenesIfUserWantsTo =
            EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo;
        public override IEnumerator Execute(TestJobData testJobData)
        {
            var cancelled = !SaveCurrentModifiedScenesIfUserWantsTo();
            if (cancelled)
            {
                throw new TestRunCanceledException();
            }

            yield break;
        }
    }
}