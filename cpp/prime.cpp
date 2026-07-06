#include <iostream>

int main() {
    std::cout << "Prime numbers between 1 and 100 are:\n";

    // Loop from 2 to 100 (1 is not a prime number)
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;

        // Check if i has any factors up to its square root
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; // Exit inner loop early if a factor is found
            }
        }

        // If no factors were found, the number is prime
        if (isPrime) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
