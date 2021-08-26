/*
In command prompt enter "g++ page_220_6_25.cc" (Win10 and gcc compiler)
Than "a abc def"
print will "abcdef"
*/


#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  /* Page 220
   Exercise 6.25: Write a main function that takes two arguments.
   Concatenate the supplied arguments and print the resulting string.
  */
  string s1=argv[1];
  string s2=argv[2];

  cout<<s1+s2<<endl;

  return 0;
}
