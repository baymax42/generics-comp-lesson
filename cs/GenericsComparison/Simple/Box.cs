using System;

namespace Example.simple
{
    public class Box<T> {
        public T Value { get; }

        public Box(T value) => Value = value;
    }

    public class Program
    {
        public static void Main(string[] args) {
            var wrapped = new Box<int>(10);
            var wrappedString = new Box<string>("abcd");

            Console.Out.Write(wrapped.Value);
            Console.Out.Write(wrappedString.Value);
        }
    }
}