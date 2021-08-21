#include <iostream>

void page_144_Ex_4_11();
void page_144_Ex_4_10();

int main(int argc, char const *argv[]) {
  // page_144_Ex_4_11();
  page_144_Ex_4_10();
  return 0;
}

void page_144_Ex_4_11(){
  /*
  Exercise 4.11: Write an expression that tests four values, a, b, c, and d, and ensures
  that a is greater than b, which is greater than c, which is greater than d.
  */
  int a=99;
  int b=88;
  int c=77;
  int d=66;

  bool test= a>b && b>c && c>d;

  std::cout<<test;
}

void page_144_Ex_4_10(){
  /*page 144
  Exercise 4.10: Write the condition for a while loop that would read ints from the
  standard input and stop when the value read is equal to 42.
  */
  int i=0;

  while(std::cin>>i && i!=42 ){}
}
