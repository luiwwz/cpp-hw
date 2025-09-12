#include <iostream>

template <typename T>
class Range {
private:
    T start;
    T end;
public:
    Range(T start, T end) : start(start), end(end) {};

    bool contains(T value) {
        return value >= start && value <= end;
    }

    T length() {
        return end - start;
    }

    void print() {
        std::cout << start << " " << end << std::endl;
    }
};

int main() {
    Range <int> range(10, 20);
    std::cout << range.length() << std::endl;
    std::cout << range.contains(10) << std::endl;
    std::cout << range.contains(20) << std::endl;
    std::cout << range.contains(30) << std::endl;
    range.print();

    Range<char> range2('a', 'f');
    std::cout << range2.contains('a') << std::endl;
    std::cout << range2.contains('b') << std::endl;
    std::cout << range2.contains('g') << std::endl;
    std::cout << range2.length() << std::endl;
    range2.print();

    return 0;
}