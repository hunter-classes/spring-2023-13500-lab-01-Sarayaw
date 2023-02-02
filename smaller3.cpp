/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 B
*** asks the user to input three random integers and program will choose whcih integer is the smallest. ***
*/

#include <iostream>
int main() {
 
    int a, b, c;
 
    std::cout << "Enter three numbers: \n";

    /* Gets input */
    std::cin >> a >> b >> c;
 
    /* If a is smaller than b */

    if (a < b && a < c) {
        std::cout << "Smallest number is: " << a;

      /* If b is smaller than a */
    } else if (b < a && b < c)  {
       std::cout << "Smallest number is: " << b;
      }

      else {

      std:: cout << "Smallest number is: "<< c;
      }

    
 
      return 0;
}
