#include <iostream>

template <typename T>
int countArgs(T obj) {
    return 1;
}

template <typename T, typename... Args>
int countArgs(T first, Args... args) {
    return 1 + countArgs(args...);
}

int main() {
    std::cout << countArgs('a', 'b') << std::endl;
    std::cout << countArgs(1, 2, 3) << std::endl;
    std::cout << countArgs(12.4, 45.7, 3.12, 3, 6, 9, 's', "hello") << std::endl;
    return 0;
}