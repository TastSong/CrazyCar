using System;
using System.Collections;
using UnityEditor;
using UnityEditorInternal;

namespace UnityEngine.TestTools
{
    public class WaitForDomainReload : IEditModeTestYieldInstruction
    {
        public WaitForDomainReload()
        {
            ExpectDomainReload = true;
        }

        public bool ExpectDomainReload { get;  }
        public bool ExpectedPlaymodeState { get; }

        public IEnumerator Perform()
        {
            EditorApplication.UnlockReloadAssemblies();

            while (InternalEditorUtility.IsScriptReloadRequested() || EditorApplication.isCompiling)
            {
                yield return null;
            }

            // Add this point the domain reload should have occured and stopped any further progress on the instruction.
            EditorApplication.LockReloadAssemblies();
            throw new Exception(
                EditorUtility.scriptCompilationFailed ? 
                    "Script compilation failed" : 
                    "Expected domain reload, but it did not occur");
        }
    }
}
