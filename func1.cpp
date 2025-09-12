#include <iostream>

template <typename T>
void printElement(const T& element) {
    std::cout << element << std::endl;
}

int main() {
    printElement(10);
    printElement(3.5);
    printElement("Hello World!");
    return 0;
}