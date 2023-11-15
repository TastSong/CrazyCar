package com.unity3d.backgrounddownload;

import android.app.DownloadManager;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

public class BackgroundDownload {
    public static BackgroundDownload create(String url, String destUri) {
        Uri uri = Uri.parse(url);
        Uri dest = Uri.parse(destUri);
        return new BackgroundDownload(uri, dest);
    }

    public static BackgroundDownload recreate(Context context, long id) {
        DownloadManager manager = (DownloadManager)context.getSystemService(Context.DOWNLOAD_SERVICE);
        DownloadManager.Query query = new DownloadManager.Query();
        query.setFilterById(id);
        Cursor cursor = manager.query(query);
        if (cursor.getCount() == 0)
            return null;
        cursor.moveToFirst();
        Uri url = Uri.parse(cursor.getString(cursor.getColumnIndex(DownloadManager.COLUMN_URI)));
        Uri dest = Uri.parse(cursor.getString(cursor.getColumnIndex(DownloadManager.COLUMN_LOCAL_URI)));
        cursor.close();
        return new BackgroundDownload(manager, id, url, dest);
    }

    private Uri downloadUri;
    private Uri destinationUri;
    private DownloadManager manager;
    private DownloadManager.Request request;
    private long id;
    private String error;

    private BackgroundDownload(Uri url, Uri dest) {
        downloadUri = url;
        destinationUri = dest;
        request = new DownloadManager.Request(url);
        request.setDestinationUri(dest);
        request.setNotificationVisibility(DownloadManager.Request.VISIBILITY_HIDDEN);
    }

    private BackgroundDownload(DownloadManager manager, long id, Uri url, Uri dest)
    {
        this.manager = manager;
        this.id = id;
        downloadUri = url;
        destinationUri = dest;
    }

    public void setAllowMetered(boolean allow) {
        request.setAllowedOverMetered(allow);
    }

    public void setAllowRoaming(boolean allow) {
        request.setAllowedOverRoaming(allow);
    }

    public long start(Context context) {
        manager = (DownloadManager)context.getSystemService(Context.DOWNLOAD_SERVICE);
        id = manager.enqueue(request);
        return id;
    }

    public void addRequestHeader(String name, String value) {
        request.addRequestHeader(name, value);
    }

    public int checkFinished() {
        if (error != null)
            return -1;
        Uri uri = manager.getUriForDownloadedFile(id);
        if (uri != null)
            return 1;
        DownloadManager.Query query = new DownloadManager.Query();
        query.setFilterById(id);
        Cursor cursor = manager.query(query);
        if (cursor.getCount() == 0) {
            error = "Background download not found";
            return -1;
        }
        cursor.moveToFirst();
        int status = cursor.getInt(cursor.getColumnIndex(DownloadManager.COLUMN_STATUS));
        int reason = cursor.getInt(cursor.getColumnIndex(DownloadManager.COLUMN_REASON));
        cursor.close();
        switch (status)
        {
            case DownloadManager.STATUS_FAILED:
                error = reasonToError(reason);
                return -1;
            case DownloadManager.STATUS_SUCCESSFUL:
                return 1;
            default:
                return 0;
        }
    }

    public float getProgress() {
        if (error != null)
            return 1.0f;
        Uri uri = manager.getUriForDownloadedFile(id);
        if (uri != null)
            return 1.0f;
        DownloadManager.Query query = new DownloadManager.Query();
        query.setFilterById(id);
        Cursor cursor = manager.query(query);
        if (cursor.getCount() == 0) {
            error = "Background download not found";
            return 1.0f;
        }
        cursor.moveToFirst();
        int downloaded = cursor.getInt(cursor.getColumnIndex(DownloadManager.COLUMN_BYTES_DOWNLOADED_SO_FAR));
        int total = cursor.getInt(cursor.getColumnIndex(DownloadManager.COLUMN_TOTAL_SIZE_BYTES));
        cursor.close();
        if (downloaded <= 0)
            return 0.0f;
        if (total <= 0)
            return -1.0f;
        float ret = downloaded / (float)total;
        if (ret < 1.0f)
            return ret;
        return 1.0f;
    }

    public String getDownloadUrl() {
        return downloadUri.toString();
    }

    public String getDestinationUri() {
        return destinationUri.toString();
    }

    public String getError() {
        return error;
    }

    private static String reasonToError(int reason) {
        switch (reason) {
            case DownloadManager.ERROR_CANNOT_RESUME:
                return "Cannot resume";
            case DownloadManager.ERROR_DEVICE_NOT_FOUND:
                return "Device not found";
            case DownloadManager.ERROR_FILE_ALREADY_EXISTS:
                return "File already exists";
            case DownloadManager.ERROR_FILE_ERROR:
                return "File error";
            case DownloadManager.ERROR_HTTP_DATA_ERROR:
                return "HTTP data error";
            case DownloadManager.ERROR_INSUFFICIENT_SPACE:
                return "Insufficient space";
            case DownloadManager.ERROR_TOO_MANY_REDIRECTS:
                return "Too many redirects";
            case DownloadManager.ERROR_UNHANDLED_HTTP_CODE:
                return "Unhandled HTTP code";
            case DownloadManager.ERROR_UNKNOWN:
            default:
                return "Unkown error";
        }
    }

    public void remove() {
        if (checkFinished() == 0)
            error = "Aborted";
        manager.remove(id);
    }
}
