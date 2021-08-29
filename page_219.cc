#include <iostream>

int page_219_6_21(int x, int* ptr_y);
void page_219_6_22(int** ptr_x, int** ptr_y);

void page_219_6_23(const int* x, int size=0);

int main(int argc, char const *argv[]) {
  int i = 15;
  int k = 10;
  int* ptr_i = &i;
  int* ptr_k = &k;

  // Exercise 6.21:
  int bigger = page_219_6_21( i, ptr_k);
  std::cout<< "Bigger number is " << bigger << std::endl;

  // Exercise 6.22:
  page_219_6_22(&ptr_i, &ptr_k);
  // After swap ptr_i points object k and ptr_k points object i.
  std::cout << "After swap ptr_i = " << *ptr_i << " ptr_k = "<< *ptr_k << '\n';

  // Exercise 6.23:
  i=0;
  page_219_6_23(&i);

  int j[2] = {0, 1};
  size_t size_j = std::end(j)-std::begin(j);
  page_219_6_23(j,size_j);

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

void page_219_6_23(const int* x, int size){
  /* Page 219
  Exercise 6.23: Write your own versions of each of the print functions presented in
  this section. Call each of these functions to print i and j defined as follows:
      int i = 0, j[2] = {0, 1};
  */
  if(!size)  // default operation is this
    std::cout<<*x<<std::endl;  // this can print first element of array or &integer
  if(size){   // if size bigger than 0 this will print array elements.
    for(size_t i=0;i!=size;i++)
      std::cout<<x[i]<<" ";
    std::cout<<std::endl;
  }
}
