//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_FACTORYREGISTRY_H
#define CPP_FACTORYREGISTRY_H


template<typename Factory>
struct FactoryRegistry {
    static std::unordered_map<const char *, Factory> registeredPrinters;

    static void registerFactory(const char *name, Factory generator) {
        registeredPrinters.emplace(name, generator);
    }
};

template<typename Factory>
std::unordered_map<const char *, Factory> FactoryRegistry<Factory>::registeredPrinters{};


#endif //CPP_FACTORYREGISTRY_H
