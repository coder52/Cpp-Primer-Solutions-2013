#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/*
  Exercise 7.42: For the class you wrote for exercise 7.40 in § 7.5.1 (p. 291), decide
  whether any of the constructors might use delegation. If so, write the delegating constructor(
  s) for your class. If not, look at the list of abstractions and choose one that you
  think would use a delegating constructor. Write the class definition for that abstraction.
*/

struct Employee{
  //Constructors
  // Employee():Employee(" ", " ", " ", 0.0){}
  Employee(std::string i):Employee(i, "-", "-", 0.0){}
  Employee(std::string i, std::string n):Employee(i, n, "-", 0.0) {}
  Employee(std::string i, std::string n, std::string add):
                                                    Employee(i, n, add, 0.0) {}
  Employee(std::string i, std::string n, std::string add, double slry):
                        employee_id(i), name(n), address(add), salary(slry) {}
  Employee(std::istream &is = std::cin){ // also default constructor
    is>>employee_id>>name>>address>>salary;
  }

  std::ostream &display(std::ostream &os = std::cout){
    os<<employee_id<<" "<<name<<" "<<address<<" "<<(double)salary;
    return os;
  }

private:
  std::string employee_id;
  std::string name;
  std::string address;
  double salary;

};

#endif
