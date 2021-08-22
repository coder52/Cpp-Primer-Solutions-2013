#include <iostream>

int page_206_6_7();

int main(int argc, char const *argv[]) {

  std::cout<<"Function called "<<page_206_6_7()<<"."<<std::endl;
  std::cout<<"Function called "<<page_206_6_7()<<"."<<std::endl;
  std::cout<<"Function called "<<page_206_6_7()<<"."<<std::endl;  


  return 0;
}

int page_206_6_7(){
  /* Page 206
  Exercise 6.7: Write a function that returns 0 when it is first called and then generates
  numbers in sequence each time it is called again.
  */
  static int num_calls=-1;
  num_calls++;

  return num_calls;
}
