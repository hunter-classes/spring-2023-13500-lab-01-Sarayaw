#include <iostream>

int main() {

  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;

  /* leap year if divisible by 400 */
  if (year % 400 == 0) {
    std::cout << year << " is a leap year.";
  }
  /*not divisible by 400*/
  else if (year % 100 == 0) {
    std::cout << year << " is not a leap year.";
  }
  /* divisible by 4*/
  else if (year % 4 == 0) {
    std::cout << year << " is a leap year.";
  }
  /* other years not leap years*/
  else {
    std::cout << year << " is not a leap year.";
  }

  return 0;
}
