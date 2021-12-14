#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/* Page 291
  Exercise 7.40: Choose one of the following abstractions (or an abstraction of your
  own choosing). Determine what data are needed in the class. Provide an appropriate
  set of constructors. Explain your decisions.
    (a) Book      (b) Date    (c) Employee
    (d) Vehicle   (e) Object  (f) Tree
*/

struct Employee{
  Employee() = default;
  Employee(std::string id_no):id(id_no){}
  Employee(std::string i, std::string n):id(i), name(n) {}
  Employee(std::string i, std::string n, std::string add):
                                                id(i), name(n), address(add) {}
  Employee(std::string i, std::string n, std::string add, double slry):
                                  id(i), name(n), address(add), salary(slry) {}

private:
  std::string id;
  std::string name;
  std::string address;
  double salary;

};

#endif
