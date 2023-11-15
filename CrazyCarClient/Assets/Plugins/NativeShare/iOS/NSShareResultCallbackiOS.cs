#if UNITY_EDITOR || UNITY_IOS
using UnityEngine;

namespace NativeShareNamespace
{
	public class NSShareResultCallbackiOS : MonoBehaviour
	{
		private static NSShareResultCallbackiOS instance;
		private NativeShare.ShareResultCallback callback;

		public static void Initialize( NativeShare.ShareResultCallback callback )
		{
			if( instance == null )
			{
				instance = new GameObject( "NSShareResultCallbackiOS" ).AddComponent<NSShareResultCallbackiOS>();
				DontDestroyOnLoad( instance.gameObject );
			}
			else if( instance.callback != null )
				instance.callback( NativeShare.ShareResult.Unknown, null );

			instance.callback = callback;
		}

		public void OnShareCompleted( string message )
		{
			NativeShare.ShareResultCallback _callback = callback;
			callback = null;

			if( _callback != null )
			{
				if( string.IsNullOrEmpty( message ) )
					_callback( NativeShare.ShareResult.Unknown, null );
				else
				{
					NativeShare.ShareResult result = (NativeShare.ShareResult) ( message[0] - '0' ); // Convert first char to digit and then to ShareResult
					string shareTarget = message.Length > 1 ? message.Substring( 1 ) : null;

					_callback( result, shareTarget );
				}
			}
		}
	}
}
#endif