#ifndef PERSON_H
#define PERSON_H

/* Page 262
Exercise 7.9: Add operations to read and print Person objects to the code you wrote
for the exercises in § 7.1.2 (p. 260).

Exercise 7.10: What does the condition in the following if statement do?
if (read(read(cin, data1), data2))
*/
struct Person {
  // operations
  std::string get_name() const {return name;}
  std::string get_address() const {return address;}
  // fields
  std::string name;
  std::string address;
};

std::istream &read (std::istream &is, Person &prs){
  is >> prs.name >> prs.address;
  return is;
}

std::ostream &print (std::ostream &os, const Person &prs){
  os << prs.get_name() <<" "<< prs.get_address();
  return os;
}

#endif
