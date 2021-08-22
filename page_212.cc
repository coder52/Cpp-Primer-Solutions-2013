#include <iostream>

void page_212_6_11(int&);

int main(int argc, char const *argv[]) {

  int num = 45;

  page_212_6_11(num);

  std::cout<<"Value reset to "<<num<<"."<<std::endl;

  return 0;
}

void page_212_6_11(int &x){
  /*
  Exercise 6.11: Write and test your own version of reset that takes a reference.
  */
  x=0;
}
