#ifndef EMPLOYEE_H
#define EMPLOYEE_H

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
