using System;
using NUnit.Framework.Interfaces;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner.TestRun
{
    [Serializable]
    internal class TestJobData
    {
        [SerializeField] 
        public string guid;
        
        [SerializeField] 
        public int taskIndex;

        [SerializeField] 
        public int taskPC;

        [SerializeField] 
        public bool isRunning;
        
        [SerializeField]
        public ExecutionSettings executionSettings;
        
        [SerializeField]
        public string[] existingFiles;

        [SerializeField] 
        public int undoGroup = -1;

        [SerializeField] 
        public EditModeRunner editModeRunner;

        [NonSerialized] 
        public bool isHandledByRunner;
        
        public ITest testTree;

        public TestJobData(ExecutionSettings settings)
        {
            guid = Guid.NewGuid().ToString();
            executionSettings = settings;
            isRunning = false;
            taskIndex = 0;
            taskPC = 0;
        }
    }
}
