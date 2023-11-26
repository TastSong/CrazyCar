using UnityEngine;
using System.IO;
using System.Collections.Generic;
#if UNITY_ANDROID || UNITY_IOS
using NativeShareNamespace;
#endif

#pragma warning disable 0414
public class NativeShare
{
	public enum ShareResult { Unknown = 0, Shared = 1, NotShared = 2 };

	public delegate void ShareResultCallback( ShareResult result, string shareTarget );

#if !UNITY_EDITOR && UNITY_ANDROID
	private static AndroidJavaClass m_ajc = null;
	private static AndroidJavaClass AJC
	{
		get
		{
			if( m_ajc == null )
				m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeShare" );

			return m_ajc;
		}
	}

	private static AndroidJavaObject m_context = null;
	private static AndroidJavaObject Context
	{
		get
		{
			if( m_context == null )
			{
				using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
				{
					m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
				}
			}

			return m_context;
		}
	}
#elif !UNITY_EDITOR && UNITY_IOS
	[System.Runtime.InteropServices.DllImport( "__Internal" )]
	private static extern void _NativeShare_Share( string[] files, int filesCount, string subject, string text, string link );
#endif

	private string subject = string.Empty;
	private string text = string.Empty;
	private string title = string.Empty;
	private string url = string.Empty;

#if UNITY_EDITOR || UNITY_ANDROID
	private readonly List<string> targetPackages = new List<string>( 0 );
	private readonly List<string> targetClasses = new List<string>( 0 );
#endif

	private readonly List<string> files = new List<string>( 0 );
	private readonly List<string> mimes = new List<string>( 0 );

	private ShareResultCallback callback;

	public NativeShare SetSubject( string subject )
	{
		this.subject = subject ?? string.Empty;
		return this;
	}

	public NativeShare SetText( string text )
	{
		this.text = text ?? string.Empty;
		return this;
	}

	public NativeShare SetUrl( string url )
	{
		this.url = url ?? string.Empty;
		return this;
	}

	public NativeShare SetTitle( string title )
	{
		this.title = title ?? string.Empty;
		return this;
	}

	public NativeShare SetCallback( ShareResultCallback callback )
	{
		this.callback = callback;
		return this;
	}

	public NativeShare AddTarget( string androidPackageName, string androidClassName = null )
	{
#if UNITY_EDITOR || UNITY_ANDROID
		if( !string.IsNullOrEmpty( androidPackageName ) )
		{
			if( androidClassName == null )
				androidClassName = string.Empty;

			bool isUnique = true;
			for( int i = 0; i < targetPackages.Count; i++ )
			{
				if( targetPackages[i] == androidPackageName && targetClasses[i] == androidClassName )
				{
					isUnique = false;
					break;
				}
			}

			if( isUnique )
			{
				targetPackages.Add( androidPackageName );
				targetClasses.Add( androidClassName );
			}
		}
#endif

		return this;
	}

	public NativeShare AddFile( string filePath, string mime = null )
	{
		if( !string.IsNullOrEmpty( filePath ) && File.Exists( filePath ) )
		{
			files.Add( filePath );
			mimes.Add( mime ?? string.Empty );
		}
		else
			Debug.LogError( "Share Error: file does not exist at path or permission denied: " + filePath );

		return this;
	}

	public NativeShare AddFile( Texture2D texture, string createdFileName = "Image.png" )
	{
		if( !texture )
			Debug.LogError( "Share Error: Texture does not exist!" );
		else
		{
			if( string.IsNullOrEmpty( createdFileName ) )
				createdFileName = "Image.png";

			bool saveAsJpeg;
			if( createdFileName.EndsWith( ".jpeg", System.StringComparison.OrdinalIgnoreCase ) || createdFileName.EndsWith( ".jpg", System.StringComparison.OrdinalIgnoreCase ) )
				saveAsJpeg = true;
			else
			{
				if( !createdFileName.EndsWith( ".png", System.StringComparison.OrdinalIgnoreCase ) )
					createdFileName += ".png";

				saveAsJpeg = false;
			}

			string filePath = Path.Combine( Application.temporaryCachePath, createdFileName );
			File.WriteAllBytes( filePath, GetTextureBytes( texture, saveAsJpeg ) );

			AddFile( filePath, saveAsJpeg ? "image/jpeg" : "image/png" );
		}

		return this;
	}

	public void Share()
	{
		if( files.Count == 0 && subject.Length == 0 && text.Length == 0 && url.Length == 0 )
		{
			Debug.LogWarning( "Share Error: attempting to share nothing!" );
			return;
		}

#if UNITY_EDITOR
		Debug.Log( "Shared!" );

		if( callback != null )
			callback( ShareResult.Shared, null );
#elif UNITY_ANDROID
		AJC.CallStatic( "Share", Context, new NSShareResultCallbackAndroid( callback ), targetPackages.ToArray(), targetClasses.ToArray(), files.ToArray(), mimes.ToArray(), subject, CombineURLWithText(), title );
#elif UNITY_IOS
		NSShareResultCallbackiOS.Initialize( callback );
		if( files.Count == 0 )
			_NativeShare_Share( new string[0], 0, subject, text, GetURLWithScheme() );
		else
		{
			// While sharing both a URL and a file, some apps either don't show up in share sheet or omit the file
			// If we append URL to text, the issue is resolved for at least some of these apps
			_NativeShare_Share( files.ToArray(), files.Count, subject, CombineURLWithText(), "" );
		}
#else
		Debug.LogWarning( "NativeShare is not supported on this platform!" );
#endif
	}

	#region Utility Functions
	public static bool TargetExists( string androidPackageName, string androidClassName = null )
	{
#if !UNITY_EDITOR && UNITY_ANDROID
		if( string.IsNullOrEmpty( androidPackageName ) )
			return false;

		if( androidClassName == null )
			androidClassName = string.Empty;

		return AJC.CallStatic<bool>( "TargetExists", Context, androidPackageName, androidClassName );
#else
		return true;
#endif
	}

	public static bool FindTarget( out string androidPackageName, out string androidClassName, string packageNameRegex, string classNameRegex = null )
	{
		androidPackageName = null;
		androidClassName = null;

#if !UNITY_EDITOR && UNITY_ANDROID
		if( string.IsNullOrEmpty( packageNameRegex ) )
			return false;

		if( classNameRegex == null )
			classNameRegex = string.Empty;

		string result = AJC.CallStatic<string>( "FindMatchingTarget", Context, packageNameRegex, classNameRegex );
		if( string.IsNullOrEmpty( result ) )
			return false;

		int splitIndex = result.IndexOf( '>' );
		if( splitIndex <= 0 || splitIndex >= result.Length - 1 )
			return false;

		androidPackageName = result.Substring( 0, splitIndex );
		androidClassName = result.Substring( splitIndex + 1 );

		return true;
#else
		return false;
#endif
	}
	#endregion

	#region Internal Functions
	private string GetURLWithScheme()
	{
		return ( url.Length == 0 || url.Contains( "://" ) ) ? url : ( "https://" + url );
	}

	private string CombineURLWithText()
	{
		if( url.Length == 0 || text.IndexOf( url, System.StringComparison.OrdinalIgnoreCase ) >= 0 )
			return text;
		else if( text.Length == 0 )
			return GetURLWithScheme();
		else
			return string.Concat( text, " ", GetURLWithScheme() );
	}

	private byte[] GetTextureBytes( Texture2D texture, bool isJpeg )
	{
		try
		{
			return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
		}
		catch( UnityException )
		{
			return GetTextureBytesFromCopy( texture, isJpeg );
		}
		catch( System.ArgumentException )
		{
			return GetTextureBytesFromCopy( texture, isJpeg );
		}

#pragma warning disable 0162
		return null;
#pragma warning restore 0162
	}

	private byte[] GetTextureBytesFromCopy( Texture2D texture, bool isJpeg )
	{
		// Texture is marked as non-readable, create a readable copy and share it instead
		Debug.LogWarning( "Sharing non-readable textures is slower than sharing readable textures" );

		Texture2D sourceTexReadable = null;
		RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		RenderTexture activeRT = RenderTexture.active;

		try
		{
			Graphics.Blit( texture, rt );
			RenderTexture.active = rt;

			sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
			sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
			sourceTexReadable.Apply( false, false );
		}
		catch( System.Exception e )
		{
			Debug.LogException( e );

			Object.DestroyImmediate( sourceTexReadable );
			return null;
		}
		finally
		{
			RenderTexture.active = activeRT;
			RenderTexture.ReleaseTemporary( rt );
		}

		try
		{
			return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
		}
		catch( System.Exception e )
		{
			Debug.LogException( e );
			return null;
		}
		finally
		{
			Object.DestroyImmediate( sourceTexReadable );
		}
	}
	#endregion
}
#pragma warning restore 0414