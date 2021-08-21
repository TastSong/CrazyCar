using System.Collections;
using UnityEngine;
using UnityEngine.TestTools;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class LegacyEditModeRunTask : TestTaskBase
    {
        public LegacyEditModeRunTask() : base(true)
        {
            
        }
        
        public override IEnumerator Execute(TestJobData testJobData)
        {
            var testLauncher = new EditModeLauncher(testJobData.executionSettings.filters, TestPlatform.EditMode, testJobData.executionSettings.runSynchronously);
            testJobData.editModeRunner = testLauncher.m_EditModeRunner;
            testLauncher.Run();
            
            while (testJobData.editModeRunner != null && !testJobData.editModeRunner.RunFinished)
            {
                yield return null;
            }
        }
    }
}