//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_GENERICFACTORY_H
#define CPP_GENERICFACTORY_H


template<typename ConcreteFactory>
class GenericFactory {
    using GeneratorType = typename ConcreteFactory::generator;
    using Registry = typename FactoryRegistry<GeneratorType>;
public:
    template<typename T>
    static GeneratorType getFactory() {
        if (Registry::registeredPrinters.contains(getIdentifier())) {
            return Registry::registeredPrinters[getIdentifier()];
        }
        return ConcreteFactory::default_generator;
    }

    static void registerFactory(GeneratorType generator) {
        Registry::registerFactory(getIdentifier(), generator);
    }

private:
    static const char *getIdentifier() {
        return typeid(T).name();
    }
};


#endif //CPP_GENERICFACTORY_H
