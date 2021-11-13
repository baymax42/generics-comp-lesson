using System.IO;

namespace Factory
{
    public class FilePrinter : IPrinter
    {
        private readonly string _filename;

        public FilePrinter(string filename)
        {
            this._filename = filename;
        }

        public void Print<T>(T data)
        {
            File.WriteAllText(_filename, data.ToString());
        }
    }
}