#ifndef PERSON_H
#define PERSON_H

/* Page 266
Exercise 7.15: Add appropriate constructors to your Person class.
*/
struct Person {
  // constructors
  Person() = default;   // Person():name(), address() {}
  Person(const std::string s1): name(s1) {}
  Person(const std::string s1, const std::string s2): name(s1), address(s2) {}
  Person(std::istream &);
  // operations
  std::string get_name() const {return name;}
  std::string get_address() const {return address;}
  // fields
  std::string name="none";
  std::string address="none";
};
std::istream &read (std::istream&, Person&);
Person::Person(std::istream &is){
  read(is, *this);
}

std::istream &read (std::istream &is, Person &prs){
  is >> prs.name >> prs.address;
  return is;
}

std::ostream &print (std::ostream &os, const Person &prs){
  os << prs.get_name() <<" "<< prs.get_address();
  return os;
}

#endif
