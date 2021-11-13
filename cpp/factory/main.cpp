//
// Created by baymax42 on 11/13/21.
//

#include "PrinterFactory.h"
#include "FilePrinter.h"

template<typename T>
void printData(T data) {
    auto factory = PrinterFactory::getFactory<T>();
    factory()->print(data);
}

int main() {
    auto file_printer_generator = []() {
        return std::unique_ptr<Printer>(new FilePrinter("tmp_string"));
    };
    PrinterFactory::registerFactory<std::string>(file_printer_generator);

    printData(std::string("new string"));
    printData("in console");
    printData(42);
}