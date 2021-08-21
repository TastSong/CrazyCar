using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks;
using UnityEngine;
using UnityEngine.TestTools;

namespace UnityEditor.TestTools.TestRunner.TestRun
{
    internal class TestJobRunner
    {
        private static IEnumerable<TestTaskBase> GetTaskList(ExecutionSettings settings)
        {
            if (settings == null)
            {
                yield break;
            }

            if (settings.EditModeIncluded() || (PlayerSettings.runPlayModeTestAsEditModeTest && settings.PlayModeInEditorIncluded()))
            {
                yield return new SaveModiedSceneTask();
                yield return new RegisterFilesForCleanupVerificationTask();
                yield return new SaveUndoIndexTask();
                yield return new BuildTestTreeTask(TestPlatform.EditMode);
                yield return new PrebuildSetupTask();
                yield return new LegacyEditModeRunTask();
                yield return new PerformUndoTask();
                yield return new CleanupVerificationTask();
                yield break;
            }

            if (settings.PlayModeInEditorIncluded() && !PlayerSettings.runPlayModeTestAsEditModeTest)
            {
                yield return new SaveModiedSceneTask();
                yield return new LegacyPlayModeRunTask();
                yield break;
            }

            if (settings.PlayerIncluded())
            {
                yield return new LegacyPlayerRunTask();
                yield break;
            }
        }

        internal List<TestJobData> SavedTestJobData = TestJobDataHolder.instance.TestRuns;
        internal Action<EditorApplication.CallbackFunction> SubscribeCallback = (callback) => EditorApplication.update += callback;
        // ReSharper disable once DelegateSubtraction
        internal Action<EditorApplication.CallbackFunction> UnsubscribeCallback = (callback) => EditorApplication.update -= callback;
        internal TestCommandPcHelper PcHelper = new EditModePcHelper();
        internal Func<ExecutionSettings, IEnumerable<TestTaskBase>> GetTasks = GetTaskList;
        internal Action<Exception> LogException = Debug.LogException;
        internal Action<string> LogError = Debug.LogError;
        internal Action<string> ReportRunFailed = CallbacksDelegator.instance.RunFailed;

        private TestJobData m_JobData;
        private TestTaskBase[] Tasks;
        private IEnumerator m_Enumerator = null;

        public string RunJob(TestJobData data)
        {
            if (data == null)
            {
                throw new ArgumentException(null, nameof(data));
            }
            
            if (m_JobData != null && m_JobData.isRunning)
            {
                throw new Exception("TestJobRunner is already running a job.");
            }

            if (data.isHandledByRunner)
            {
                throw new Exception("Test job is already being handled.");
            }
            
            m_JobData = data;
            m_JobData.isHandledByRunner = true;

            if (!m_JobData.isRunning)
            {
                m_JobData.isRunning = true;
                SavedTestJobData.Add(m_JobData);
            }
            
            Tasks = GetTasks(data.executionSettings).ToArray();
            if (!data.executionSettings.runSynchronously)
            {	            
                SubscribeCallback(ExecuteStep);
            }
            else
            {
                while (data.isRunning)
                {
                    ExecuteStep();
                }
            }

            return data.guid;
        }

        private void ExecuteStep()
        {
            try
            {
                if (m_JobData.taskIndex >= Tasks.Length)
                {
                    StopRun();
                    return;
                }

                if (m_Enumerator == null)
                {
                    var task = Tasks[m_JobData.taskIndex];
                    m_Enumerator = task.Execute(m_JobData);
                    if (task.SupportsResumingEnumerator)
                    {
                        PcHelper.SetEnumeratorPC(m_Enumerator, m_JobData.taskPC);    
                    }
                }

                if (!m_Enumerator.MoveNext())
                {
                    m_JobData.taskIndex++;
                    m_JobData.taskPC = 0;
                    m_Enumerator = null;
                    return;
                }
                
                if (Tasks[m_JobData.taskIndex].SupportsResumingEnumerator)
                {
                    m_JobData.taskPC = PcHelper.GetEnumeratorPC(m_Enumerator);
                }
            }
            catch (TestRunCanceledException)
            {
                StopRun();
            }
            catch (AggregateException ex)
            {
                StopRun();
                LogError(ex.Message);
                foreach (var innerException in ex.InnerExceptions)
                {
                    LogException(innerException);
                }
                ReportRunFailed("Multiple unexpected errors happened while running tests.");
            }
            catch (Exception ex)
            {
                StopRun();
                LogException(ex);
                ReportRunFailed("An unexpected error happened while running tests.");
            }
        }

        private void StopRun()
        {
            m_JobData.isRunning = false;
            UnsubscribeCallback(ExecuteStep);
            SavedTestJobData.Remove(m_JobData);
        }
    }
}