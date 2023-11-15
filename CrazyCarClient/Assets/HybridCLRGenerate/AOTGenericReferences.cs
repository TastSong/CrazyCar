using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"Main.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// QFramework.Architecture.<>c<object>
	// QFramework.Architecture<object>
	// QFramework.BindableProperty.<>c<int>
	// QFramework.BindableProperty.<>c<object>
	// QFramework.BindableProperty<int>
	// QFramework.BindableProperty<object>
	// QFramework.BindablePropertyUnRegister<int>
	// QFramework.BindablePropertyUnRegister<object>
	// System.Action<int>
	// System.Action<object>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<object>
	// System.Predicate<object>
	// }}

	public void RefMethods()
	{
		// object QFramework.CanGetModelExtension.GetModel<object>(QFramework.ICanGetModel)
		// object QFramework.CanGetSystemExtension.GetSystem<object>(QFramework.ICanGetSystem)
		// System.Void QFramework.CanSendCommandExtension.SendCommand<object>(QFramework.ICanSendCommand)
		// System.Void QFramework.CanSendCommandExtension.SendCommand<object>(QFramework.ICanSendCommand,object)
		// object QFramework.IArchitecture.GetModel<object>()
		// object QFramework.IArchitecture.GetSystem<object>()
		// System.Void QFramework.IArchitecture.SendCommand<object>()
		// System.Void QFramework.IArchitecture.SendCommand<object>(object)
	}
}