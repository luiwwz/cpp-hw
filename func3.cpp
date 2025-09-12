#include <iostream>

template <typename T>
T sumArray(T* arr, int size) {
    T sum = arr[0];
    for (int i = 1; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << sumArray(arr, 5) << std::endl;

    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << sumArray(arr2, 5) << std::endl;

    std::string arr3[] = {"hello ", "world "};
    std::cout << sumArray(arr3, 2) << std::endl;

    return 0;
}
