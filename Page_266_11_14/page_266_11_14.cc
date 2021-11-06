#include <iostream>
#include <string>
#include "Sales_data.h"

/* Page 266
Exercise 7.11: Add constructors to your Sales_data class and write a program to
use each of the constructors.
Exercise 7.14: Write a version of the default constructor that explicitly
initializes the members to the values we have provided as in-class initializers.
        answer 7.14: comment default constructor and write;
        Sales_data():bookNo(""), units_sold(0), revenue(0.0) {}
*/

int main(int argc, char const *argv[]) {

  Sales_data sd_1;
  print(std::cout, sd_1);
  std::cout<<std::endl;

  Sales_data sd_2("0-201-78345-X", 3, 20.00);
  print(std::cout, sd_2);
  std::cout<<std::endl;

  Sales_data sd_3 = {"0-201-78345-Y", 5, 15.00};
  print(std::cout, sd_3);
  std::cout<<std::endl;

  Sales_data sd_4("0-201-78345-Z");
  print(std::cout, sd_4);
  std::cout<<std::endl;

  Sales_data sd_5={"0-201-78345-K"};
  print(std::cout, sd_5);
  std::cout<<std::endl;

  Sales_data sd_6;
  sd_6 = {"0-201-78345-P"};
  print(std::cout, sd_6);
  std::cout<<std::endl;

  return 0;
}
