using UnityEditor.TestTools.TestRunner.Api;
using UnityEditor.TestTools.TestRunner.GUI;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner
{
    internal class RerunCallbackData : ScriptableSingleton<RerunCallbackData>
    {
        [SerializeField]
        internal UITestRunnerFilter[] runFilters;

        [SerializeField]
        internal TestMode testMode;
    }
}
