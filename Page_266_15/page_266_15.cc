#include <iostream>
#include <string>
#include "Person.h"

/* Page 266
Exercise 7.15: Add appropriate constructors to your Person class.
*/

int main(int argc, char const *argv[]) {

  Person person_0;
  print(std::cout, person_0);
  std::cout<<std::endl;

  Person person_1("person_1", "Bbbb23" );
  print(std::cout, person_1);
  std::cout<<std::endl;

  Person person_2={"person_2", "Bbbb23"};
  print(std::cout, person_2);
  std::cout<<std::endl;

  Person person_3;
  person_3={"person_3", "Bbbb23"};
  print(std::cout, person_3);
  std::cout<<std::endl;

  Person person_4;
  person_4={"person_4"};
  print(std::cout, person_4);
  std::cout<<std::endl;

  std::cout<<"Enter new person und his address."<<std::endl;
  Person person_5;
  person_5={std::cin};
  print(std::cout, person_5);
  std::cout<<std::endl;

  return 0;
}
