// display an integer that is entered by the user
#include <iostream>

int main() {
    int number;
    std::cout << "Please enter an integer: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }
    return 0;
}