#include <vector>
#include <iostream>


template<typename T>
class Counter {
public:
    static int value;

    Counter() {
        value++;
    }
};

template<typename T>
int Counter<T>::value = 0;

int main() {
    for (int i = 0; i < 10; i++) {
        Counter<int>{};
    }
    std::cout << Counter<int>::value << std::endl;

    for (int i = 0; i < 10; i++) {
        Counter<double>{};
    }
    std::cout << Counter<double>::value << std::endl;
}