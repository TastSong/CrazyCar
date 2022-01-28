= Native Share for Android & iOS =

Online documentation & example code available at: https://github.com/yasirkula/UnityNativeShare
E-mail: yasirkula@gmail.com


1. ABOUT
This plugin helps you natively share files (images, videos, documents, etc.) and/or plain text on Android & iOS. A ContentProvider is used to share the media on Android.


2. HOW TO
2.1. Android Setup
NativeShare no longer requires any manual setup on Android. If you were using an older version of the plugin, you need to remove NativeShare's "<provider ... />" from your AndroidManifest.xml.

For reference, the legacy documentation is available at: https://github.com/yasirkula/UnityNativeShare/wiki/Manual-Setup-for-Android

2.2. iOS Setup
There are two ways to set up the plugin on iOS:

a. Automated Setup for iOS
- (optional) change the value of 'Photo Library Usage Description' at 'Project Settings/yasirkula/Native Share'

b. Manual Setup for iOS
- set the value of 'Automated Setup' to false at 'Project Settings/yasirkula/Native Share'
- build your project
- enter a Photo Library Usage Description to Info.plist in Xcode (in case user decides to save the shared media to Photos)
- also enter a Photo Library Additions Usage Description to Info.plist in Xcode, if exists


3. FAQ
- Can I share on a specific app?
On Android, you can share on a specific app via AddTarget. For iOS, you can check out this post and see if it works for you: https://forum.unity.com/threads/native-share-for-android-ios-open-source.519865/page-4#post-4011874

- I can't share image with text on X app
It is just not possible to share an image/file with text/subject on some apps (e.g. Facebook), they intentionally omit either the image or the text from the shared content. These apps require you to use their own SDKs for complex share actions. For best compatibility, I'd recommend you to share either only image or only text.

- I can't build the project to Android, it says "Android resource linking failed: unexpected element <queries> found in <manifest>" in the error message
NativeShare adds "<queries>" element to AndroidManifest.xml due to the new package visibility change (https://developer.android.com/training/package-visibility). The build error can be fixed by following these steps: https://developers.google.com/ar/develop/unity/android-11-build (in my tests, changing "Gradle installed with Unity" wasn't necessary). In the worst case, if you are OK with NativeShare not working on some of the affected devices, then you can open NativeShare.aar with WinRAR or 7-Zip and then remove the "<queries>...</queries>" element from AndroidManifest.xml.

- Can't share, it says "java.lang.ClassNotFoundException: com.yasirkula.unity.NativeShare" in Logcat
If you are sure that your plugin is up-to-date, then enable "Custom Proguard File" option from Player Settings and add the following line to that file: -keep class com.yasirkula.unity.* { *; }


4. SCRIPTING API
Simply create a new NativeShare object and customize it by chaining the following functions as you like:

- SetSubject( string subject ): sets the subject (primarily used in e-mail applications)
- SetText( string text ): sets the shared text. Note that the Facebook app will omit text, if exists
- SetUrl( string url ): sets the shared url. On supported iOS apps, this url is used to generate a preview of the target webpage. Other iOS apps may append the url to the text or omit it. While sharing a file on iOS or while sharing anything on Android, the url is appended to the text (unless the text already contains the url)
- AddFile( string filePath, string mime = null ): adds the file at path to the share action. You can add multiple files of different types. The MIME of the file is automatically determined if left null; however, if the file doesn't have an extension and/or you already know the MIME of the file, you can enter the MIME manually. MIME has no effect on iOS
- AddFile( Texture2D texture, string createdFileName = "Image.png" ): saves the texture to Application.temporaryCachePath with the specified filename and adds the image file to the share action
- SetTitle( string title ): sets the title of the share dialog on Android platform. Has no effect on iOS
- AddTarget( string androidPackageName, string androidClassName = null ): shares content on a specific application on Android platform. If androidClassName is left null, list of activities in the share dialog will be narrowed down to the activities in the specified androidPackageName that can handle this share action. Note that androidClassName, if provided, must be the full name of the activity (with its package). You can call this function multiple times. This function has no effect on iOS
- SetCallback( ShareResultCallback callback ): invokes the callback function after the share action is completed. ShareResultCallback has the following signature: void ShareResultCallback( ShareResult result, string shareTarget )
  - "ShareResult result" can take 3 values:
    - Unknown: we can't determine whether or not the user has shared the content
	- Shared: user has probably shared the content. This value guarantees that the user has at least selected an app from the share sheet. But it is impossible to say whether the user has actually shared the content or cancelled the operation right after selecting the app from the share sheet
	- NotShared: either the user has closed the share sheet immediately or selected an app from the share sheet but then decided not to share the content (unfortunately, most apps return Shared for the latter case)
  - "string shareTarget" stores information about the app that the user has selected from the share sheet. It can be null or empty, if this information isn't provided. Usually, this is the package name/class name of the selected application. You can use this value to e.g. determine if the user has picked Twitter from the share sheet: shareTarget != null && shareTarget.ToLowerInvariant().Contains( "twitter" )

Finally, calling the Share() function of the NativeShare object will present the share sheet.


5. KNOWN LIMITATIONS
- Gif files are shared as static images on iOS (to learn more, please see this issue: https://github.com/yasirkula/UnityNativeShare/issues/22)