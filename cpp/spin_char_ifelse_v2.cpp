#include <iostream>
#include <thread>
#include <chrono>

int main() {
  std::cout << "Loading ";
  int i = 0;
  while (i < 200) { 
    int j = i % 4;
    char c;
    if (j == 0) {
      c = '|';
    } else if (j == 1) {
      c = '/';
    } else if (i == 2) {
      c = '-';
    } else if (i % 4 == 3) {
      c = '\\';
    }
    std::cout << c << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << '\b'; // Move back one character
    i = i + 1;
  }
  std::cout << "Done!" << std::endl;
  return 0;
}
