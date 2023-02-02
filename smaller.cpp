/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 A
*** asks the user to input two numbers and program will figure out which one of the two numbers are smaller ***
*/

#include <iostream>
int main() {
 
    int a, b;
 
    std::cout << "Enter two numbers \n";

    /* Gets input */
    std::cin >> a >> b ;
 
    /* If a is smaller than b */

    if (a < b) {
        std::cout << "Smallest number is: " << a;

      /* If b is smaller than a */
    } else if (b < a)  {
       std::cout << "Smallest number is: " << b;

    } 
 
      return 0;
}
