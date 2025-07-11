#include <iostream>

int main() {
    int i;
    std::cout << "Enter an integer: ";
    std::cin >> i;
    if (i % 2 == 0) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                std::cout << "Divisible by 30" << std::endl;
            } else {
                std::cout << "Divisible by 6" << std::endl;
            }
        } else {
            std::cout << "Divisible by 2" << std::endl;
        }
    }
    return 0;
}