using NUnit.Framework;
using NUnit.Framework.Interfaces;

namespace UnityEngine.TestTools.TestRunner
{
    internal class UnityTestTimeoutException : ResultStateException
    {
        public UnityTestTimeoutException(int timeout)
            : base(BuildMessage(timeout))
        {
        }

        private static string BuildMessage(int timeout)
        {
            return string.Format("Timeout value of {0}ms was exceeded", timeout);
        }

        public override ResultState ResultState
        {
            get { return ResultState.Failure; }
        }

        public override string StackTrace
        {
            get { return ""; }
        }
    }
}
