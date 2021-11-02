#include <iostream>
#include <numeric>

// accumulate uses operator+ for summation - will work for any type that has overloaded operator+
template<typename T>
T sum(T values[], size_t size) {
    return std::accumulate(values, values + size, T{});
}

struct SummableStruct {
    int value;

    explicit SummableStruct(int value = 1) : value(value) {}
};

SummableStruct operator+(const SummableStruct &structureA, const SummableStruct &structureB) {
    return SummableStruct{structureB.value + structureA.value};
}

std::ostream& operator<<(std::ostream &out, const SummableStruct &structureB) {
    out << structureB.value;
    return out;
}

struct NotSummableStruct {};

std::ostream& operator<<(std::ostream &out, const NotSummableStruct &structureB) {
    out << "Not summable";
    return out;
}

int main() {
    SummableStruct summable_values[] = {SummableStruct{}, SummableStruct{}, SummableStruct{}};
    NotSummableStruct not_summable_values[] = {NotSummableStruct{}, NotSummableStruct{}, NotSummableStruct{}};
    int integer_values[] = {1, 1, 1};

    std::cout << sum(summable_values, 3) << std::endl;
    std::cout << sum(integer_values, 3) << std::endl;
    //std::cout << sum(not_summable_values, 3) << std::endl; // Won't compile

    return 0;
}
