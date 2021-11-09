#ifndef PERSON_H
#define PERSON_H

/* Page 271
Exercise 7.22: Update your Person class to hide its implementation.
*/
class Person {
public:
  // constructors
  Person() = default;   // Person():name(), address() {}
  Person(const std::string s1): name(s1) {}
  Person(const std::string s1, const std::string s2): name(s1), address(s2) {}
  Person(std::istream &);
  // operations
  std::string get_name() const {return name;}
  std::string get_address() const {return address;}
private:
  // fields
  std::string name="none";
  std::string address="none";
// friend functions
friend std::istream &read (std::istream &, Person &);
friend std::ostream &print (std::ostream &, const Person &);
};

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
