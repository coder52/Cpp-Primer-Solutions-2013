#include <iostream>
#include <string>
#include "Person.h"

/*
Exercise 7.4: Write a class named Person that represents the name and address of
a person. Use a string to hold each of these elements. Subsequent exercises will
incrementally add features to this class.
Exercise 7.5: Provide operations in your Person class to return the name and address.
Should these functions be const? Explain your choice.
*/

int main(int argc, char const *argv[]) {

  Person person;
  person.name = "Ahmet";
  person.address = "Bahnhofstr 46";

  std::cout<<person.get_name()<<" "<< person.get_address()<<std::endl;


  return 0;
}
