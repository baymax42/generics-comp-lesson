using System;

namespace Factory
{
    public class ConsolePrinter : IPrinter
    {
        public void Print<T>(T data)
        {
            Console.Out.WriteLine(data);
        }
    }
}