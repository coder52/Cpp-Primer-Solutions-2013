#include <iostream>
#include "Sales_data.h"

/*
"Give following input first_item
  0-201-78345-X 3 20.00
"
*/

int main(int argc, char const *argv[]) {
  
  std::cout<<"Example 1"<<std::endl;
  Sales_data sd_1;
  std::cout<<"\nExample 2"<<std::endl;
  Sales_data sd_2("0-201-78345-X");
  std::cout<<"\nExample 3"<<std::endl;
  Sales_data sd_3("0-201-78345-X", 3, 20.00);
  std::cout<<"\nExample 4"<<std::endl;
  Sales_data sd_4(std::cin); //Give this input: 0-201-78345-X 3 20.00

  return 0;
}
