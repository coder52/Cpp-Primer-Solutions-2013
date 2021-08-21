#ifndef PAGE_126_CC
#define PAGE_126_CC

#include "functions.h"

void page_126_Ex_41_42(){
  /*page 126
    Exercise 3.41: Write a program to initialize a vector from an array of ints.
    Exercise 3.42: Write a program to copy a vector of ints into an array of ints.
  */

  int arr[] = {0,1,2,3,4,5,6,7};
  // initialize a vector from an array
  std::vector<int> v(std::begin(arr),std::end(arr));

  for(int i:v){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;

  // initialize an empty array
  int arr_c[v.size()];
  // copy vector into an array
  for(size_t i=0;i!=v.size();i++){
    arr_c[i]=v[i];
  }

  for(int i:arr_c){
    std::cout<<i<<" ";
  }
}

#endif
