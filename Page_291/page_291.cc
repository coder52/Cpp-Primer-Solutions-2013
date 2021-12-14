#include <iostream>
#include "Sales_data.h"

// using namespace::std;
/*
"Give following input first_item
  0-201-78345-X 3 20.00
"
*/

Sales_data first_item(std::cin);
// Sales_data first_item  // for Exercise 7.37:

int main(int argc, char const * argv[]){

  std::cout<<"first_item :"<<"\n";
  print(std::cout, first_item);
  std::cout<<"\n";

  std::cout<<"next :"<<"\n";
  Sales_data next;
  print(std::cout, next);
  std::cout<<"\n";

  std::cout<<"last :"<<"\n";
  Sales_data last("9-999-99999-9");
  print(std::cout, last);

  return 0;
}
