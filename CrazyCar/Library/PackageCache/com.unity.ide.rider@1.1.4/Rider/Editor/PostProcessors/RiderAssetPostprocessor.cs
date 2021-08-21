using Unity.CodeEditor;
using UnityEditor;

namespace Packages.Rider.Editor.PostProcessors
{
  public class RiderAssetPostprocessor: AssetPostprocessor
  {
    public static bool OnPreGeneratingCSProjectFiles()
    {
      var path = RiderScriptEditor.GetEditorRealPath(CodeEditor.CurrentEditorInstallation);
      if (RiderScriptEditor.IsRiderInstallation(path))
        return !ProjectGeneration.isRiderProjectGeneration;
      return false;
    }
  }
}