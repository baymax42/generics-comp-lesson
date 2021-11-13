using System;

namespace Factory
{
    class Program
    {
        private static void PrintData<T>(T data)
        {
            Factory<IPrinter>.GetFactory()
                .Build<T>()
                .Print(data);
        }

        static void Main(string[] args)
        {
            var printerFactory = new PrinterFactory();
            printerFactory.RegisterPrinter<string>(new FilePrinter("tmp_string"));

            PrintData("string");
            PrintData(42);
        }
    }
}