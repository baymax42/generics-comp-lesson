//
// Created by baymax42 on 11/13/21.
//

#ifndef GENERICS_COMP_FACTORY_H
#define GENERICS_COMP_FACTORY_H

#include <sstream>

class Printer {
public:
    template<typename T>
    void print(T data) {
        std::stringstream sstream;
        sstream << data;
        print(sstream.str().c_str());
    }

    virtual void print(const char* data) = 0;
};




#endif //GENERICS_COMP_FACTORY_H
