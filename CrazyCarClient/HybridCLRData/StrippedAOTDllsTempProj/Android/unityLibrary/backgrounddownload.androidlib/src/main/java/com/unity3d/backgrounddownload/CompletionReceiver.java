package com.unity3d.backgrounddownload;

import android.app.DownloadManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class CompletionReceiver extends BroadcastReceiver {
    public interface Callback {
        void downloadCompleted();
    }

    private static Callback callback;

    public static void setCallback(Callback cback) {
        callback = cback;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        if (callback == null)
            return;
        if (DownloadManager.ACTION_DOWNLOAD_COMPLETE.equals(intent.getAction())) {
            try {
                callback.downloadCompleted();
            } catch (UnsatisfiedLinkError e) {
                // if app quits, callback can be not-null, but is invalid (C# side destroyed)
                // this is fine: we will pick the status next time app is launched
                // this is to due to race-condition: C# object destroyed, Java not yet
                callback = null;
            }
        }
    }
}
