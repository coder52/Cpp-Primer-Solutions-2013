#include <iostream>
#include <vector>
#include <string>

using namespace::std;
/*
Exercise 6.54: Write a declaration for a function that takes two int parameters and
returns an int, and declare a vector whose elements have this function pointer type.

Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int
values. Store pointers to these functions in your vector from the previous exercise.

Exercise 6.56: Call each element in the vector and print their result.
*/

// using pfunc = int (*) (int,int);
// or
typedef int (*pfunc) (int, int);

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main(int argc, char const *argv[]) {

  vector<pfunc> pfunc_vec;
  pfunc_vec.push_back(add);
  pfunc_vec.push_back(subtract);
  pfunc_vec.push_back(multiply);
  pfunc_vec.push_back(divide);

  for(pfunc i:pfunc_vec){
    cout<<i(10,30)<<endl;
  }

  return 0;
}

int add(int x, int y){
  return x+y;
}

int subtract(int x, int y){
  return x-y;
}

int multiply (int x, int y){
  return x*y;
}

int divide (int x, int y){
  return x/y;
}
