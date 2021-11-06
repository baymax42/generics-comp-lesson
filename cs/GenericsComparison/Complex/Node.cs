using System;

namespace Complex
{
    
    public class Node<T>
    {
        public T _data;
        
        public T Data
        {
            get => _data;
            set
            {
                Console.Out.Write("Node.setData");
                _data = value;
            }
        }

        public void Boxing()
        {
            int i = 42;
            object o = i;
            o = 1;
            Console.WriteLine(i);
        }

        public Node(T data) { Data = data; }
    }
}