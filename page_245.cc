#include <iostream>
#include <string>

using namespace std;

/*
  Exercise 6.50: Given the declarations for f from page 242, list the viable functions, if
  any for each of the following calls. Indicate which function is the best match, or if the
  call is illegal whether there is no match or why the call is ambiguous.
  (a) f(2.56, 42) (b) f(42) (c) f(42, 0) (d) f(2.56, 3.14)

  Exercise 6.51: Write all four versions of f. Each function should print a distinguishing
  message. Check your answers for the previous exercise. If your answers were
  incorrect, study this section until you understand why your answers were wrong.
*/

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main(int argc, char const *argv[]) {
  // (a)
  // f(2.56, 42);  //error: call of overloaded 'f(double, int)' is ambiguous
  // (b)
  f(42);
  // (c)
  f(42, 0);
  // (d)
  f(2.56, 3.14);
  return 0;
}

void f(){
  cout<<"f() has run."<<endl;
};

void f(int){
  cout<<"f(int) has run."<<endl;
};

void f(int, int){
  cout<<"f(int, int) has run."<<endl;
};

void f(double, double){
  cout<<"f(double, double) has run."<<endl;
};
