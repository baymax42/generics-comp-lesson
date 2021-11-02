#include <vector>
#include <iostream>

// const-value parametrization
template<int N>
class Factorial {
public:
    static int const value = N * Factorial<N - 1>::value;
};

// full-specialization
template<>
class Factorial<0> {
public:
    static int const value = 1;
};

int main() {
    std::cout << "5! = " << Factorial<5>::value << std::endl;
}