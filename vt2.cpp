#include <iostream>

template <typename T>
auto findMax(T a, T b) {
    return a > b ? a : b;
}

template <typename T, typename... Rest>
auto findMax(T first, Rest... rest) {
    return findMax(first, findMax(rest...));
}

int main() {
    std::cout << findMax(1, 2, 3, 10) << std::endl;
    std::cout << findMax(3.14, 2.728, 1.4) << std::endl;
    return 0;
}
