using System;
using System.Collections.Generic;

namespace Factory
{
    public class PrinterFactory : Factory<IPrinter>
    {
        private readonly Dictionary<Type, IPrinter> _registeredPrinters = new();

        public void RegisterPrinter<T>(IPrinter factory)
        {
            _registeredPrinters.Add(typeof(T), factory);
        }
        
        public override IPrinter Build<T>()
        {
            if (_registeredPrinters.ContainsKey(typeof(T)))
            {
                return _registeredPrinters[typeof(T)];
            }
            return new ConsolePrinter();
        }
    }
}