#ifndef PERSON_H
#define PERSON_H

/*
Exercise 7.4: Write a class named Person that represents the name and address of
a person. Use a string to hold each of these elements. Subsequent exercises will
incrementally add features to this class.
Exercise 7.5: Provide operations in your Person class to return the name and
address. Should these functions be const? Explain your choice.

I think that get_name und get_address must constant, because we will not change
value of the fieldsby these functions.
*/
struct Person {
  // operations
  std::string get_name() const {return name;}
  std::string get_address() const {return address;}
  // fields
  std::string name;
  std::string address;
};





#endif
