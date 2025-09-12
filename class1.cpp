#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    Pair(T1 a, T2 b) : a(a), b(b) {}

    void print() {
        std::cout << a << " " << b << std::endl;
    }
};

int main() {
    Pair<int, double> p(1, 2.5);
    p.print();

    return 0;
}