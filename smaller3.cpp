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
