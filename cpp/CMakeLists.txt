cmake_minimum_required(VERSION 3.19)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_box box.cpp)
add_executable(cpp_duck_typing duck_typing.cpp)
add_executable(cpp_ct_list factorial.cpp)
add_executable(cpp_spec specialization.cpp)
add_executable(cpp_counter counter.cpp)
add_executable(cpp_factory factory/Printer.h factory/ConsolePrinter.cpp factory/ConsolePrinter.h factory/FilePrinter.cpp factory/FilePrinter.h factory/main.cpp factory/PrinterFactory.h factory/FactoryImplementation.h factory/FactoryRegistry.h)