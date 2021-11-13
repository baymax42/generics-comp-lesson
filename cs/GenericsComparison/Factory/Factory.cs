using System;
using System.Collections.Generic;

namespace Factory
{
    public abstract class Factory<TProduct>
    {
        protected Factory()
        {
            RegisterFactory(this);
        }

        private static readonly Dictionary<Type, Factory<TProduct>> RegisteredFactories = new();

        public static void RegisterFactory(Factory<TProduct> factory)
        {
            RegisteredFactories.Add(typeof(TProduct), factory);
        }

        public static Factory<TProduct> GetFactory()
        {
            return RegisteredFactories[typeof(TProduct)];
        }

        public abstract TProduct Build<T>();
    }
}