#include <iostream>

int page_219_6_21(int x, int* ptr_y);
void page_219_6_22(int** ptr_x, int** ptr_y);

int main(int argc, char const *argv[]) {
  int i = 15;
  int k = 10;
  int* ptr_i = &i;
  int* ptr_k = &k;
  // Exercise 6.21:
  int bigger = page_219_6_21( i, ptr_k);
  std::cout<< "Bigger number is " << bigger << std::endl;
  //Exercise 6.22:
  page_219_6_22(&ptr_i, &ptr_k);
  std::cout << "After swap ptr_i = " << *ptr_i << " ptr_k = "<< *ptr_k << '\n';
  return 0;
}

int page_219_6_21(int x, int* ptr_y){
  /* Page 219
  Exercise 6.21: Write a function that takes an int and a pointer to an int and returns
  the larger of the int value or the value to which the pointer points. What type should
  you use for the pointer?
  */
  return (x > *ptr_y) ? x : *ptr_y;

}

void page_219_6_22(int** ptr_x, int** ptr_y){
  /* Page 219
  Exercise 6.22: Write a function to swap two int pointers.
  */
  int* ptr_dummy = *ptr_x;
  *ptr_x = *ptr_y;
  *ptr_y = ptr_dummy;
}
