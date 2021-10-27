#include <iostream>
#include <string>

using namespace std;

string str_arr[5] = {"one","two","three","four","five"};

typedef string strArrT [5];

strArrT* page_230_6_37_a();

int main() {

  string (*str)[5] = page_230_6_37_a();

// Print array
  for(auto i:*str){
    cout<<i<<" ";
  }
}

strArrT* page_230_6_37_a(){
  /* Page 230
  Exercise 6.37 a : Write three additional declarations for the function in the
  previous exercise.
    a. One should use a type alias,
    b. one should use a trailing return,
    c. and the third should use decltype.
  Which form do you prefer and why?
  */
  strArrT* str = &str_arr;
  return str;
}
