/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 D
*** asks the user to input a month and year and the output of the program will give them the number of days each month with respect to the leap year. ***
*/
#include <iostream>
bool leap_year(int y) {
  return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
int num_of_days(int month, int year) {
  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
    break;

  case 2:
    if (leap_year(year) == 1)
      return 29;
    else
      return 28;
    break;
  default:
    break;
  }

  return 0;
}

int main() {
  int year = 0;
  int month = 0;
  int days;
  std::cout << "Input Year: ";
  std::cin >> year;
  std::cout << "Input Month: ";
  std::cin >> month;
  if (year > 0 && (month > 0 && month < 13)) {
    std::cout << "Number of days of the year " << year << " and month " << month << " is: " << num_of_days(month, year) << std::endl;

  } else
    std::cout << "Do it again!";
} 
