using System;
using NUnit.Framework.Interfaces;

namespace Packages.Rider.Editor.UnitTesting
{
  [Serializable]
  public enum EventType { TestStarted, TestFinished, RunFinished }

  [Serializable]
  public class TestEvent
  {
    public EventType type;
    public string id;
    public string assemblyName;
    public string output;
    public TestStatus testStatus;
    public double duration;
    public string parentId;
    
    public TestEvent(EventType type, string id, string assemblyName, string output, double duration, TestStatus testStatus, string parentID)
    {
      this.type = type;
      this.id = id;
      this.assemblyName = assemblyName;
      this.output = output;
      this.testStatus = testStatus;
      this.duration = duration;
      parentId = parentID;
    }
  }
}