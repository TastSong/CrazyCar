#if TEST_FRAMEWORK
using System;
using System.Text;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEngine;

namespace Packages.Rider.Editor.UnitTesting
{
  public class TestsCallback : ScriptableObject, ICallbacks
    {
        public void RunFinished(ITestResultAdaptor result)
        {
          CallbackData.instance.isRider = false;
          
          CallbackData.instance.events.Add(
            new TestEvent(EventType.RunFinished, "", "","", 0, ParseTestStatus(result.TestStatus), ""));
          CallbackData.instance.RaiseChangedEvent();
        }

        public void TestStarted(ITestAdaptor result)
        {
          if (result.Method == null) return;
          
          CallbackData.instance.events.Add(
            new TestEvent(EventType.TestStarted, GetUniqueName(result), result.Method.TypeInfo.Assembly.GetName().Name, "", 0, ParseTestStatus(TestStatus.Passed), result.ParentFullName));
          CallbackData.instance.RaiseChangedEvent();
        }

        public void TestFinished(ITestResultAdaptor result)
        {
          if (result.Test.Method == null) return;
          
          CallbackData.instance.events.Add(
            new TestEvent(EventType.TestFinished, GetUniqueName(result.Test), result.Test.Method.TypeInfo.Assembly.GetName().Name, ExtractOutput(result), result.Duration, ParseTestStatus(result.TestStatus), result.Test.ParentFullName));
          CallbackData.instance.RaiseChangedEvent();
        }
        
        // todo: reimplement JetBrains.Rider.Unity.Editor.AfterUnity56.UnitTesting.TestEventsSender.GetUniqueName
        private static string GetUniqueName(ITestAdaptor test)
        {
          string str = test.FullName;
          return str;
        }

        public void RunStarted(ITestAdaptor testsToRun)
        {
        }
        
        private static NUnit.Framework.Interfaces.TestStatus ParseTestStatus(TestStatus testStatus)
        {
          return (NUnit.Framework.Interfaces.TestStatus)Enum.Parse(typeof(NUnit.Framework.Interfaces.TestStatus), testStatus.ToString());
        }
        
        private static string ExtractOutput(ITestResultAdaptor testResult)
        {
          var stringBuilder = new StringBuilder();
          if (testResult.Message != null)
          {
            stringBuilder.AppendLine("Message: ");
            stringBuilder.AppendLine(testResult.Message);
          }

          if (!string.IsNullOrEmpty(testResult.Output))
          {
            stringBuilder.AppendLine("Output: ");
            stringBuilder.AppendLine(testResult.Output);
          }

          if (!string.IsNullOrEmpty(testResult.StackTrace))
          {
            stringBuilder.AppendLine("Stacktrace: ");
            stringBuilder.AppendLine(testResult.StackTrace);
          }
      
          var result = stringBuilder.ToString();
          if (result.Length > 0)
            return result;

          return testResult.Output ?? string.Empty;
        }
    }
}
#endif