#include <iostream>
#include <vector>

template <typename T>
int linearSearch(const std::vector<T>& vec,const T& value) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4 ,5};
    std::cout << linearSearch(vec, 5) << std::endl;

    std::vector<double> vec2 = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << linearSearch(vec2, 1.1) << std::endl;

    std::vector<std::string> vec3 = {"hello", "world"};
    std::cout << linearSearch(vec3, std::string("rau")) << std::endl;

    return 0;
}