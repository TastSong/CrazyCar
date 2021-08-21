using System;
using System.Linq;
using NUnit.Framework.Interfaces;
using NUnit.Framework.Internal.Filters;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner.Api
{
    [Serializable]
    public class ExecutionSettings
    {
        public ExecutionSettings(params Filter[] filtersToExecute)
        {
            filters = filtersToExecute;
        }
        
        [SerializeField]
        internal BuildTarget? targetPlatform;
        
        // Note: Is not available after serialization
        public ITestRunSettings overloadTestRunSettings;
        
        [SerializeField]
        internal Filter filter;
        [SerializeField]
        public Filter[] filters;
        [SerializeField]
        public bool runSynchronously;
        [SerializeField]
        public int playerHeartbeatTimeout = 60*10;

        internal bool EditModeIncluded()
        {
            return filters.Any(f => IncludesTestMode(f.testMode, TestMode.EditMode));
        }
        
        internal bool PlayModeInEditorIncluded()
        {
            return filters.Any(f => IncludesTestMode(f.testMode, TestMode.PlayMode) && targetPlatform == null);
        }

        internal bool PlayerIncluded()
        {
            return filters.Any(f => IncludesTestMode(f.testMode, TestMode.PlayMode) && targetPlatform != null);
        }

        private static bool IncludesTestMode(TestMode testMode, TestMode modeToCheckFor)
        {
            return (testMode & modeToCheckFor) == modeToCheckFor;
        }
        
        internal ITestFilter BuildNUnitFilter()
        {
            return new OrFilter(filters.Select(f => f.ToRuntimeTestRunnerFilter(runSynchronously).BuildNUnitFilter()).ToArray());
        }
    }
}
