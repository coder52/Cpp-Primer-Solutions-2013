#include <iostream>
#include <string>

using namespace std;

string str_arr[5] = {"one","two","three","four","five"};
// page_230_6_36
string (*page_230_6_36())[5];
// page_230_6_37
//a. type alias
typedef string strArrT [5];
strArrT* page_230_6_37_a();
// b. Trailing Return Type
auto page_230_6_37_b() -> string (*) [5];
// c. decltype
decltype(str_arr)* page_230_6_37_c();

int main() {

  // string (*str)[5] = page_230_6_36();
  // string (*str)[5] = page_230_6_37_a();
  // string (*str)[5] = page_230_6_37_b();
  string (*str)[5] = page_230_6_37_c();

  for(auto i:*str){
    cout<<i<<" ";
  }

}

string (*page_230_6_36())[5] {
  /* Page 230
  Exercise 6.36: Write the declaration for a function that returns a reference to an array
  of ten strings, without using either a trailing return, decltype, or a type alias.
  */
  string (*str)[5] =&str_arr;
  return str;

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

auto page_230_6_37_b() -> string (*) [5] {
  /* Page 230
  Exercise 6.37 a : Write three additional declarations for the function in the
  previous exercise.
    a. One should use a type alias,
    b. one should use a trailing return,
    c. and the third should use decltype.
  Which form do you prefer and why?
  */
  return &str_arr;
}

decltype(str_arr)* page_230_6_37_c() {
  /* Page 230
  Exercise 6.37 a : Write three additional declarations for the function in the
  previous exercise.
    a. One should use a type alias,
    b. one should use a trailing return,
    c. and the third should use decltype.
  Which form do you prefer and why?
  */
  return &str_arr;
}
