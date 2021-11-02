#include <string>

template<typename T>
struct Bar {
    T get(T x) {
        return nullptr;
    }
};

template<>
struct Bar<std::string> {
    std::string get(std::string) {
        return "";
    }
};

int main() {
    auto wrapped = Bar<std::string>{};
    wrapped.get("abcd");
    return 0;
}
