#include <iostream>
#include <thread>
#include <chrono>

int main() {
  const char spinner[] = {'|', '/', '-', '\\'};
  std::cout << "Loading ";
  int i;
  for (i = 0; i < 200; i = i + 1) { 
    std::cout << spinner[i % 4] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << '\b'; // Move back one character
  }
  std::cout << "Done!" << std::endl;
  return 0;
}
