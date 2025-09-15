#include <iostream>

int square(int x) {
    return x * x;
}

template <typename Func, typename... Args>
void applyAndPrint(Func f, Args... args) {
    ((std::cout << f(args) << std::endl), ...);
}


int main() {
    applyAndPrint(square, 2, 3, 4, 5);
}

// Вывод:
// 4
// 9
// 16
// 25