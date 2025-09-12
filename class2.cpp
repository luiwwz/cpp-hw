#include <iostream>

template <typename T, int N>
class FixedArray {
private:
    T arr[N];
public:
    FixedArray() {};

    void set(int index, T value) {
        arr[index] = value;
    }

    T get(int index) {
        return arr[index];
    }

    int size() {
        return N;
    }
};

int main() {
    FixedArray<int, 10>  arr;
    arr.set(0, 10);
    std::cout << arr.get(0) << std::endl;
    std::cout << arr.size() << std::endl;

    FixedArray<std::string, 2>  arr2;
    arr2.set(0, "Hello");
    std::cout << arr2.get(0) << std::endl;

    return 0;
}