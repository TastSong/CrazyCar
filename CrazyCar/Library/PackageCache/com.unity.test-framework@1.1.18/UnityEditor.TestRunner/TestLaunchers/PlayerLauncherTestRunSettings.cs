using UnityEditor.TestTools.TestRunner.Api;

namespace UnityEditor.TestTools.TestRunner
{
    class PlayerLauncherTestRunSettings : ITestRunSettings
    {
        public bool buildOnly { set; get; }

        public string buildOnlyLocationPath { set; get; }

        public void Dispose()
        {
        }

        void ITestRunSettings.Apply()
        {
        }
    }
}