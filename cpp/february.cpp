#include <iostream>

int main() {
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  int day;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        day = 29;
      } else {
        day = 28;
      }
    } else {
      day = 29;
    }
  } else {
    day = 28;
  }
  std::cout << "February has " << day << " days in year " << year << "." << std::endl;
  return 0;
}
