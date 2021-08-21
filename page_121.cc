#ifndef PAGE_121_CC
#define PAGE_121_CC

#include "functions.h"

void page_121_Ex_3_35_sol_1(){
  /* Page 121 Solution 1
  Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
  */
    int ia[] = {0,1,2,3,4,5,6,7,8,9}; // array of 10 int

    int *ia2(ia);                  // ia2 points to ia[0]
                                   // equalant: int *ia2 = &ia[0];
                                   // or: auto ia2(ia); or: auto ia2=&ia[0];
    for(auto i:ia){
      *(ia2)=0;
      std::cout<<*(ia2++)<<" ";
    }
}

void page_121_Ex_3_35_sol_2(){
  /* Page 121 Solution 2
  Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
  */
  int ia[] = {0,1,2,3,4,5,6,7,8,9}; // array of 10 int

  int *pfirst=std::begin(ia);
  int *plast=std::end(ia);
  for(auto pfirst=ia;pfirst!=plast;pfirst++){
    *pfirst=0;
  }
    for(auto i:ia){
      std::cout<<i<<" ";
    }
}




#endif
