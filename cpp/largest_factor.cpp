#include <iostream>

int main() {
  int n;
  std::cout << "Enter n: ";
  std::cin >> n;
  int a = n - 1;
  while (a > 0) {
    if (n % a == 0) {
      std::cout << "Largest factor less than " << n << " is " << a << std::endl;
      return 0;
    } else {
      a = a - 1;
    }
  }
  return 0;
}
