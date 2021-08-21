using System.Collections;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal abstract class TestTaskBase
    {
        public bool SupportsResumingEnumerator;

        protected TestTaskBase(bool supportsResumingEnumerator = false)
        {
            SupportsResumingEnumerator = supportsResumingEnumerator;
        }

        public abstract IEnumerator Execute(TestJobData testJobData);
    }
}