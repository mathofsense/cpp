// print the largest value of char, short, int, long long

// get the value by bit operations
// assign the value to a variable first
#include <iostream>

int main() {
    // Calculate the maximum values for each type
    char max_char = 128 - 1; 
    short max_short = 128 * 256 - 1; 
    int max_int = (int) ((unsigned int) 1024 * 1024 * 1024 * 2 - 1);
    long long max_long_long = (long long) (max_int + 1) * (long long) (max_int + 1) * 2 - 1;

    // add 1 to each variable
    max_char += 1;
    max_short += 1;
    max_int += 1;
    max_long_long += 1;

    // Print the maximum values
    std::cout << "Max char: " << (int) (max_char) << std::endl;
    std::cout << "Max short: " << max_short << std::endl;
    std::cout << "Max int: " << max_int << std::endl;
    std::cout << "Max long long: " << max_long_long << std::endl;

    return 0;
}
