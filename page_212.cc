#include <iostream>

void page_212_6_11(int&);
void page_212_6_12(int&, int&);

int main(int argc, char const *argv[]) {
  //Exercise 6.11 ///////////////////////////////////////////
  int num = 45;

  page_212_6_11(num);

  std::cout<<"Given value reset to "<<num<<"."<<std::endl;

  //Exercise 6.12 ///////////////////////////////////////////
  std::cout<<"######################################"<<std::endl;
  int i = 5;
  int j = 7;
  std::cout<< "Before swap i = " << i << " and j = " << j << std::endl;

  page_212_6_12(i, j);

  std::cout<< "After swap i = " << i << " and j = " << j <<std::endl;
  return 0;
}

void page_212_6_11(int &x){
  /* Page 212
  Exercise 6.11: Write and test your own version of reset that takes a reference.
  */
  x=0;
}

void page_212_6_12(int& x1, int& x2){
  /* Page 212
  Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references
  instead of pointers to swap the value of two ints. Which version do you think
  would be easier to use and why?
  */
  int dummy=x1;
  x1=x2;
  x2=dummy;
}
