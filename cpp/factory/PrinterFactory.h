//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_PRINTERFACTORY_H
#define CPP_PRINTERFACTORY_H

#include <memory>
#include "Printer.h"
#include "ConsolePrinter.h"
#include "FactoryImplementation.h"

typedef std::unique_ptr<Printer>(*PrinterGenerator)();

class PrinterFactory : public FactoryImplementation<PrinterFactory, PrinterGenerator> {
public:
    static PrinterGenerator default_generator() {
        return []() { return std::unique_ptr<Printer>(new ConsolePrinter()); };
    }
};


#endif //CPP_PRINTERFACTORY_H
