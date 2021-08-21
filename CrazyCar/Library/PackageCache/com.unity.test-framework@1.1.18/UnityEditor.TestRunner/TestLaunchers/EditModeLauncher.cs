using System;
using System.Collections.Generic;
using NUnit.Framework.Interfaces;
using UnityEditor.SceneManagement;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEditor.TestTools.TestRunner.GUI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.TestRunner.Utils;
using UnityEngine.TestTools;
using UnityEngine.TestTools.TestRunner;

namespace UnityEditor.TestTools.TestRunner
{
    internal class EditModeLauncher : TestLauncherBase
    {
        public static bool IsRunning;
        internal readonly EditModeRunner m_EditModeRunner;
        public bool launchedOutsideApi;

        // provided for backward compatibility with Rider UnitTesting prior to Rider package v.1.1.1
        public EditModeLauncher(UITestRunnerFilter filter, TestPlatform platform)
        {
            launchedOutsideApi = true;
            var apiFilter = new[]
            {
                new Filter()
                {
                    testMode = TestMode.EditMode,
                    testNames = filter.testNames,
                    categoryNames = filter.categoryNames,
                    groupNames = filter.groupNames,
                    assemblyNames = filter.assemblyNames
                }
            };
            
            ScriptableObject.CreateInstance<TestRunnerApi>().Execute(new ExecutionSettings(apiFilter));
        }

        public EditModeLauncher(Filter[] filters, TestPlatform platform, bool runSynchronously)
        {
            TestEnumerator.Reset();
            m_EditModeRunner = ScriptableObject.CreateInstance<EditModeRunner>();
            m_EditModeRunner.UnityTestAssemblyRunnerFactory = new UnityTestAssemblyRunnerFactory();
            m_EditModeRunner.Init(filters, platform, runSynchronously);
        }

        public override void Run()
        {
            if (launchedOutsideApi)
            {
                // Do not use the launcher, as it will be relaunched trough the api. See ctor.
                return;
            }

            IsRunning = true;
            
            SceneSetup[] previousSceneSetup;
            if (!OpenNewScene(out previousSceneSetup))
                return;

            var callback = AddEventHandler<EditModeRunnerCallback>();
            callback.previousSceneSetup = previousSceneSetup;
            callback.runner = m_EditModeRunner;
            AddEventHandler<CallbacksDelegatorListener>();

            m_EditModeRunner.Run();
            AddEventHandler<BackgroundListener>();
            AddEventHandler<TestRunCallbackListener>();
            
            if (m_EditModeRunner.RunningSynchronously)
                m_EditModeRunner.CompleteSynchronously();
        }

        private static bool OpenNewScene(out SceneSetup[] previousSceneSetup)
        {
            previousSceneSetup = null;

            var sceneCount = SceneManager.sceneCount;

            var scene = SceneManager.GetSceneAt(0);
            var isSceneNotPersisted = string.IsNullOrEmpty(scene.path);

            if (sceneCount == 1 && isSceneNotPersisted)
            {
                EditorSceneManager.NewScene(NewSceneSetup.DefaultGameObjects, NewSceneMode.Single);
                return true;
            }
            RemoveUntitledScenes();

            // In case the user chose not to save the dirty scenes we reload them
            ReloadUnsavedDirtyScene();

            previousSceneSetup = EditorSceneManager.GetSceneManagerSetup();

            scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Additive);
            SceneManager.SetActiveScene(scene);

            return true;
        }

        private static void ReloadUnsavedDirtyScene()
        {
            for (var i = 0; i < SceneManager.sceneCount; i++)
            {
                var scene = SceneManager.GetSceneAt(i);
                var isSceneNotPersisted = string.IsNullOrEmpty(scene.path);
                var isSceneDirty = scene.isDirty;
                if (isSceneNotPersisted && isSceneDirty)
                {
                    EditorSceneManager.ReloadScene(scene);
                }
            }
        }

        private static void RemoveUntitledScenes()
        {
            int sceneCount = SceneManager.sceneCount;

            var scenesToClose = new List<Scene>();
            for (var i = 0; i < sceneCount; i++)
            {
                var scene = SceneManager.GetSceneAt(i);
                var isSceneNotPersisted = string.IsNullOrEmpty(scene.path);
                if (isSceneNotPersisted)
                {
                    scenesToClose.Add(scene);
                }
            }
            foreach (Scene scene in scenesToClose)
            {
                EditorSceneManager.CloseScene(scene, true);
            }
        }

        public class BackgroundListener : ScriptableObject, ITestRunnerListener
        {
            public void RunStarted(ITest testsToRun)
            {
            }

            public void RunFinished(ITestResult testResults)
            {
                IsRunning = false;
            }

            public void TestStarted(ITest test)
            {
            }

            public void TestFinished(ITestResult result)
            {
            }
        }

        public T AddEventHandler<T>() where T : ScriptableObject, ITestRunnerListener
        {
            return m_EditModeRunner.AddEventHandler<T>();
        }
    }
}
