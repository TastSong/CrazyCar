using System.Collections;

namespace  ReadyPlayerMe
{
    public interface IDownload
    {
        IEnumerator DownloadIntoMemory(string url);
        IEnumerator DownloadIntoFile(string url, string path);
    }
}
