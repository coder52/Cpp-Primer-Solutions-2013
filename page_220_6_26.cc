/*
In command prompt enter "g++ page_220_6_26.cc" (Win10 and gcc compiler)
Than "a -d -o ofile data0"
print will "-d -o ofile data0"
*/
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  /* Page 220
  Exercise 6.26: Write a programthat accepts the options presented in this section.
  Print the values of the arguments passed to main.
  */
  // argv[0] is name of executable file usually a
  for(size_t i=1;i!=argc;i++){ // argc is number of strings in array
    cout<<argv[i]<<" ";
  }

  return 0;
}
