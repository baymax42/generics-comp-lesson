//
// Created by baymax42 on 11/13/21.
//

#include "FilePrinter.h"

void FilePrinter::print(const char *data) {
    std::ofstream file;
    file.open(filename);
    file << data;
    file.close();
}
