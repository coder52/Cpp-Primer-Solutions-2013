#include <iostream>

void page_210_6_10(int* x1, int* x2);

int main(int argc, char const *argv[]) {
  int i = 5;
  int j = 7;
  std::cout<< "Before swap i = " << i << " and j = " << j << std::endl;

  page_210_6_10(&i, &j);

  std::cout<< "After swap i = " << i << " and j = " << j <<std::endl;

  return 0;
}

void page_210_6_10(int* x1, int* x2){
  /* Page 210
  Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test
  the function by calling it and printing the swapped values.
  */
  int dummy=*x1;
  *x1=*x2;
  *x2=dummy;
}
