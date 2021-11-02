#include <iostream>
#include <utility>

template<typename T>
class Box {
    T value;
public:
    Box(T value) : value(std::move(value)) {}

    T getValue() {
        return value;
    }
};

int main() {
    auto wrapped = new Box{50};
    auto wrapped_string = new Box{std::string{"abcd"}};

    std::cout << wrapped->getValue() << std::endl;
    std::cout << wrapped_string->getValue() << std::endl;

    delete wrapped;
    delete wrapped_string;
    return 0;
}
