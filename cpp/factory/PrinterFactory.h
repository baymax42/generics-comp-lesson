//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_PRINTERFACTORY_H
#define CPP_PRINTERFACTORY_H

#include <memory>
#include <unordered_map>
#include "Printer.h"
#include "ConsolePrinter.h"
#include "FilePrinter.h"
#include "FactoryRegistry.h"

typedef std::unique_ptr<Printer>(*PrinterGenerator)();


class PrinterFactory {
    using Registry = FactoryRegistry<PrinterGenerator>;
public:
    template<typename T>
    static PrinterGenerator getFactory() {
        if (Registry::registeredPrinters.contains(getIdentifier<T>())) {
            return Registry::registeredPrinters[getIdentifier<T>()];
        }
        return []() { return std::unique_ptr<Printer>(new ConsolePrinter()); };
    }

    template<typename T>
    static void registerFactory(PrinterGenerator generator) {
        Registry::registerFactory(getIdentifier<T>(), generator);
    }
private:

    template<typename T>
    static const char *getIdentifier() {
        return typeid(T).name();
    }
};


#endif //CPP_PRINTERFACTORY_H
