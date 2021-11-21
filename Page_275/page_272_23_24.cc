#include <iostream>
#include "Screen.h"

/* Page 272
  Exercise 7.23: Write your own version of the Screen class.

  Exercise 7.24: Give your Screen class three constructors: a default constructor; a constructor
  that takes values for height and width and initializes the contents to hold the
  given number of blanks; and a constructor that takes values for height, width, and a
  character to use as the contents of the screen.

  Exercise 7.25: Can Screen safely rely on the default versions of copy and assignment?
  If so, why? If not, why not?
*/

int main(int argc, char const *argv[]){

  Screen sc_1;
  print_screen(std::cout, sc_1);

  Screen sc_2 = {15, 20};
  print_screen(std::cout, sc_2);

  Screen sc_3(13, 19, 'f');
  print_screen(std::cout, sc_3);

  //Exercise 7.25
  Screen sc_x = sc_2;
  print_screen(std::cout, sc_x);

  sc_x = sc_3;
  print_screen(std::cout, sc_x);



  return 0;
}
