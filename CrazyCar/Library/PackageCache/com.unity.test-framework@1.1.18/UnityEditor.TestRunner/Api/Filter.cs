using System;
using UnityEngine;
using UnityEngine.TestTools.TestRunner.GUI;

namespace UnityEditor.TestTools.TestRunner.Api
{
    [Serializable]
    public class Filter
    {
        [SerializeField]
        public TestMode testMode;
        [SerializeField]
        public string[] testNames;
        [SerializeField]
        public string[] groupNames;
        [SerializeField]
        public string[] categoryNames;
        [SerializeField]
        public string[] assemblyNames;
        [SerializeField]
        public BuildTarget? targetPlatform;

        internal RuntimeTestRunnerFilter ToRuntimeTestRunnerFilter(bool synchronousOnly)
        {
            return new RuntimeTestRunnerFilter()
            {
                testNames = testNames,
                categoryNames = categoryNames,
                groupNames = groupNames,
                assemblyNames = assemblyNames,
                synchronousOnly = synchronousOnly
            };
        }
    }
}
