#include <iostream>
#include <vector>
/*
Exercise 7.43: Assume we have a class named NoDefault that has a constructor that
takes an int, but has no default constructor. Define a class C that has a member
of type NoDefault. Define the default constructor for C.

Exercise 7.44: Is the following declaration legal? If not, why not?
vector<NoDefault> vec(10);
  Answer: No, it isn't legal. NoDefault class hasn't default constructor that's
  why elements of vector can't be value initialized

Exercise 7.45: What if we defined the vector in the previous execercise to hold
objects of type C?
*/
class NoDefault{
  int number;
public:
  NoDefault(int i):number(i){}
};

class C{
  NoDefault nd;
public:
  C():nd(0){}
};

int main(int argc, char const *argv[]){
  // Exercise 7.43
  C c1;
  C c2;
  C c3;
  //Exercise 7.45
  std::vector<C> vec(10);
  vec.push_back(c1);
  vec.push_back(c2);
  vec.push_back(c3);
}
