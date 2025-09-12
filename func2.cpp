#include <iostream>

template <typename T>
void mySwap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 10;
    int b = 20;
    mySwap(a, b);
    std::cout << a << " " << b << std::endl;

    double c = 3.14;
    double d = 2.78;
    mySwap(c, d);
    std::cout << c << " " << d << std::endl;

    std::string s = "world";
    std::string s1 = "hello";
    mySwap(s1, s);
    std::cout << s << " " << s1 << std::endl;

    return 0;
}