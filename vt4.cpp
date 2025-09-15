#include <iostream>

std::string makeSentence(const std::string& last) {
    if (last == "") {
        return "";
    }
    return last + ".";
}

template <typename... Args>
std::string makeSentence(const std::string& first, const Args&... args) {
    return first + " " + makeSentence(args...);
}
int main() {
    std::cout << makeSentence("Hello", "World!") << std::endl;
    std::cout << makeSentence("") << std::endl;
    return 0;
}