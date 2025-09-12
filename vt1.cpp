#include <iostream>

template <typename... Args>
auto sum(Args... args) {
    return (args + ... + 0);
}

int main() {
    std::cout << sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;
    std::cout << sum(1.5, 2.3, 6.7) << std::endl;
    return 0;
}