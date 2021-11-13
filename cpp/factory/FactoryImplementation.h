//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_FACTORYIMPLEMENTATION_H
#define CPP_FACTORYIMPLEMENTATION_H

#include "Printer.h"
#include "FactoryRegistry.h"

template<typename ConcreteFactory, typename GeneratorType>
class FactoryImplementation {
    using Registry = FactoryRegistry<GeneratorType>;
public:
    template<typename T>
    static GeneratorType getFactory() {
        auto id = getIdentifier<T>();
        if (Registry::registeredPrinters.contains(id)) {
            return Registry::registeredPrinters[id];
        }
        return ConcreteFactory::default_generator();
    }

    template<typename T>
    static void registerFactory(GeneratorType generator) {
        Registry::registerFactory(getIdentifier<T>(), generator);
    }

private:
    template<typename T>
    static const char *getIdentifier() {
        return typeid(T).name();
    }
};


#endif //CPP_FACTORYIMPLEMENTATION_H
