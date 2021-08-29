#include <iostream>
#include <string>

using namespace std;

string str_arr[5] = {"one","two","three","four","five"};

string (*ptr_strArr())[5];

int main() {

  string (*str)[5] = ptr_strArr();

  for(auto i:*str){
    cout<<i<<" ";
  }

}

string (*ptr_strArr())[5] {
  /* Page 230
  Exercise 6.36: Write the declaration for a function that returns a reference to an array
  of ten strings, without using either a trailing return, decltype, or a type alias.
  */
  string (*str)[5] =&str_arr;
  return str;

}
