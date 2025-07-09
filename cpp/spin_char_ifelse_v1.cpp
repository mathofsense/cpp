#include <iostream>
#include <thread>
#include <chrono>

int main() {
  std::cout << "Loading ";
  int i = 0;
  while (i < 200) { 
    if (i % 4 == 0) {
      std::cout << '|' << std::flush;
    } else if (i % 4 == 1) {
      std::cout << '/' << std::flush;
    } else if (i % 4 == 2) {
      std::cout << '-' << std::flush;
    } else if (i % 4 == 3) {
      std::cout << '\\' << std::flush;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << '\b'; // Move back one character
    i = i + 1;
  }
  std::cout << "Done!" << std::endl;
  return 0;
}
