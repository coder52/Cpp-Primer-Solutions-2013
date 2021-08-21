#ifndef PAGE_124_CC
#define PAGE_124_CC
#include "functions.h"

void page_124_Ex_3_40(){
  /*Page 124
    Exercise 3.40: Write a program to define two character arrays initialized from string
    literals. Now define a third character array to hold the concatenation of the two arrays.
    Use strcpy and strcat to copy the two arrays into the third.
  */
    char chstr1[]="Hello";
    char chstr2[]=" World!";
    char chstr[13];

    std::strcpy(chstr,chstr1);
    std::strcat(chstr,chstr2);


    for(char ch:chstr){
      std::cout<<ch<<" ";
    }
}

void page_124_Ex_3_39(){
  /* Page 124
    Exercise 3.39: Write a program to compare two strings. Now write a program to
    compare the values of two C-style character strings.
  */
  string str1 = "Kapadokya";
  string str2 = "Kapadokyali";

  char charray1[]="Kapadokya";
  char charray2[]="Kapadokyali";

  std::cout<< (str1 > str2) <<std::endl;
  std::cout<< std::strcmp(charray1, charray2) <<std::endl;
}

#endif
