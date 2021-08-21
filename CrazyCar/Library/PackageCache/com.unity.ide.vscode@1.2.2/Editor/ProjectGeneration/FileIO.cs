using System.IO;
using System.Text;

namespace VSCodeEditor
{
    public interface IFileIO
    {
        bool Exists(string fileName);

        string ReadAllText(string fileName);
        void WriteAllText(string fileName, string content);

        void CreateDirectory(string pathName);
    }

    class FileIOProvider : IFileIO
    {
        public bool Exists(string fileName)
        {
            return File.Exists(fileName);
        }

        public string ReadAllText(string fileName)
        {
            return File.ReadAllText(fileName);
        }

        public void WriteAllText(string fileName, string content)
        {
            File.WriteAllText(fileName, content, Encoding.UTF8);
        }

        public void CreateDirectory(string pathName)
        {
            Directory.CreateDirectory(pathName);
        }
    }
}
