//
// Created by baymax42 on 11/13/21.
//

#ifndef CPP_FILEPRINTER_H
#define CPP_FILEPRINTER_H

#include <fstream>
#include <utility>
#include "Printer.h"

class FilePrinter : public Printer {
public:
    FilePrinter(std::string filename) : filename(std::move(filename)) {}

    void print(const char *data) override;
protected:
    std::string filename;
};


#endif //CPP_FILEPRINTER_H
