#include <iostream>
#include <string>

using namespace std;

string str_arr[10] = {"one","two","three","four","five", "six", "seven",
                                                      "eight", "nine", "ten"};
// page_230_6_36
string (*page_230_6_36())[10];

int main() {

  string (*str)[10] = page_230_6_36();

  for(auto i:*str){
    cout<<i<<" ";
  }

}

string (*page_230_6_36())[10] {
  /* Page 230
  Exercise 6.36: Write the declaration for a function that returns a reference to an array
  of ten strings, without using either a trailing return, decltype, or a type alias.
  */
  string (*str)[10] =&str_arr;
  return str;

}
