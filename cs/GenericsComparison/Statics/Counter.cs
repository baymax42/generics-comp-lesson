using System;
using System.Linq;

namespace Statics
{
    public class Counter<T>
    {
        public static int Count { get; set; }

        public Counter()
        {
            Count += 1;
        }
    }
    
    public class Program
    {
        static void Main(string[] args)
        {
            foreach (int _ in Enumerable.Range(0, 10))
            {
                new Counter<double>();
            }
            Console.WriteLine(Counter<double>.Count);
            
            foreach (int _ in Enumerable.Range(0, 10))
            {
                new Counter<int>();
            }
            Console.WriteLine(Counter<int>.Count);
        }
    }
}