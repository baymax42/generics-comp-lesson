using System;

namespace Complex
{
    public class CustomNode : Node<int>
    {
        public CustomNode(int data) : base(data)
        {
        }
    }
    
    
    public class Program
    {
        public static void Main(string[] args)
        {
            var node = new CustomNode(10);
        }
    }
}