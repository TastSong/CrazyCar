using System;
using System.Linq;
using System.Threading;
using UnityEditor.TestTools.TestRunner.CommandLineTest;
using UnityEditor.TestTools.TestRunner.TestRun;
using UnityEngine;
using UnityEngine.TestRunner.TestLaunchers;
using UnityEngine.TestTools;
using UnityEngine.TestTools.NUnitExtensions;

namespace UnityEditor.TestTools.TestRunner.Api
{
    public class TestRunnerApi : ScriptableObject, ITestRunnerApi
    {
        internal ICallbacksHolder callbacksHolder;

        private ICallbacksHolder m_CallbacksHolder
        {
            get
            {
                if (callbacksHolder == null)
                {
                    return CallbacksHolder.instance;
                }

                return callbacksHolder;
            }
        }

        internal Func<ExecutionSettings,string> ScheduleJob = (executionSettings) =>
        {
            var runner = new TestJobRunner();
            return runner.RunJob(new TestJobData(executionSettings));
        };
        
        public string Execute(ExecutionSettings executionSettings)
        {
            if (executionSettings == null)
            {
                throw new ArgumentNullException(nameof(executionSettings));
            }

            if ((executionSettings.filters == null || executionSettings.filters.Length == 0) && executionSettings.filter != null)
            {
                // Map filter (singular) to filters (plural), for backwards compatibility.
                executionSettings.filters = new [] {executionSettings.filter};
            }

            if (executionSettings.targetPlatform == null && executionSettings.filters != null &&
                executionSettings.filters.Length > 0)
            {
                executionSettings.targetPlatform = executionSettings.filters[0].targetPlatform;
            }

            return ScheduleJob(executionSettings);
        }

        public void RegisterCallbacks<T>(T testCallbacks, int priority = 0) where T : ICallbacks
        {
            if (testCallbacks == null)
            {
                throw new ArgumentNullException(nameof(testCallbacks));
            }

            m_CallbacksHolder.Add(testCallbacks, priority);
        }

        public void UnregisterCallbacks<T>(T testCallbacks) where T : ICallbacks
        {
            if (testCallbacks == null)
            {
                throw new ArgumentNullException(nameof(testCallbacks));
            }

            m_CallbacksHolder.Remove(testCallbacks);
        }

        internal void RetrieveTestList(ExecutionSettings executionSettings, Action<ITestAdaptor> callback)
        {
            if (executionSettings == null)
            {
                throw new ArgumentNullException(nameof(executionSettings));
            }
            
            var firstFilter = executionSettings.filters?.FirstOrDefault() ?? executionSettings.filter;
            RetrieveTestList(firstFilter.testMode, callback);
        }

        public void RetrieveTestList(TestMode testMode, Action<ITestAdaptor> callback)
        {
            if (callback == null)
            {
                throw new ArgumentNullException(nameof(callback));
            }

            var platform = ParseTestMode(testMode);
            var testAssemblyProvider = new EditorLoadedTestAssemblyProvider(new EditorCompilationInterfaceProxy(), new EditorAssembliesProxy());
            var testAdaptorFactory = new TestAdaptorFactory();
            var testListCache = new TestListCache(testAdaptorFactory, new RemoteTestResultDataFactory(), TestListCacheData.instance);
            var testListProvider = new TestListProvider(testAssemblyProvider, new UnityTestAssemblyBuilder());
            var cachedTestListProvider = new CachingTestListProvider(testListProvider, testListCache, testAdaptorFactory);

            var job = new TestListJob(cachedTestListProvider, platform, (testRoot) =>
            {
                callback(testRoot);
            });
            job.Start();
        }

        internal static bool IsRunActive()
        {
            return RunData.instance.isRunning;
        }

        private static TestPlatform ParseTestMode(TestMode testMode)
        {
            return (((testMode & TestMode.EditMode) == TestMode.EditMode) ? TestPlatform.EditMode : 0) | (((testMode & TestMode.PlayMode) == TestMode.PlayMode) ? TestPlatform.PlayMode : 0);
        }
    }
}
