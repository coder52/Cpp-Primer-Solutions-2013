#include <iostream>
#include <string>
#include "Person.h"

/* Page 262
Exercise 7.9: Add operations to read and print Person objects to the code you wrote
for the exercises in § 7.1.2 (p. 260).
*/

int main(int argc, char const *argv[]) {

  Person person;
  read(std::cin, person);
  std::cout<<std::endl;
  print(std::cout, person);

  return 0;
}
