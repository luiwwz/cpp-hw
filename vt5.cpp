#include <iostream>


void spaceControl(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << " ";
    }
}

class Logger {
private:
    int space;
public:
    Logger(int space) : space(space) {}
    
    template <typename T>
    void logOne(T obj) {
         spaceControl(space);
         std::cout << obj << std::endl;
    }

    template <typename T>
    void log(T obj) {
         logOne(obj);
    }

    template <typename T, typename... Args>
    void log(T first, Args... rest) {
        logOne(first);
        log(rest...);
    }


};
int main() {
    Logger logger(4);  // отступ 4 пробела
    logger.log("Hello", 42, 3.14, 'A');

    // Вывод:
    //     Hello
    //     42
    //     3.14
    //     A
    return 0;
}