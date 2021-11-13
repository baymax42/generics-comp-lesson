//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_CONSOLEPRINTER_H
#define CPP_CONSOLEPRINTER_H

#include <iostream>
#include "Printer.h"

class ConsolePrinter : public Printer {
public:
    void print(const char *data) override;
};


#endif //CPP_CONSOLEPRINTER_H
