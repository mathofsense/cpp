#include <iostream>
#include <thread>
#include <chrono>

int main() {
    const int width = 30; // Width of the bouncing area
    int i = 0;
    int direction = 0;

    while (i < 200) {
      if (direction == 0) {
        std::cout << "\b O"; // Print the ball moving right
      } else {
        std::cout << "\b \b\bO"; // Print the ball moving left
      }
      std::cout << std::flush; // Ensure the output is displayed immediately  
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      i = i + 1;
      if (i % width == 0) {
        direction = (direction + 1) % 2; // Change direction at the edges
      }
    }

    std::cout << "\nDone bouncing!" << std::endl;
    return 0;
}
