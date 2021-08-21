using System;
using UnityEditor;
using UnityEngine;

namespace Packages.Rider.Editor
{
  public class RiderScriptEditorData : ScriptableSingleton<RiderScriptEditorData>
  {
    [SerializeField] internal bool HasChanges = true; // sln/csproj files were changed 
    [SerializeField] internal bool shouldLoadEditorPlugin;
    [SerializeField] internal bool InitializedOnce;
    [SerializeField] internal string currentEditorVersion;

    public void Init()
    {
      if (string.IsNullOrEmpty(currentEditorVersion))
        Invalidate(RiderScriptEditor.CurrentEditor);
    }

    public void Invalidate(string editorInstallationPath)
    {
      currentEditorVersion = RiderPathLocator.GetBuildNumber(editorInstallationPath);
      if (!Version.TryParse(currentEditorVersion, out var version))
        shouldLoadEditorPlugin = false;

      shouldLoadEditorPlugin = version >= new Version("191.7141.156");
    }
  }
}