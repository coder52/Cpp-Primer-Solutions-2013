#include <iostream>
#include <initializer_list>

using std::initializer_list;

void page_222_6_27(initializer_list<int> int_list){
  /* Page 222
  Exercise 6.27: Write a function that takes an initializer_list<int> and produces
  the sum of the elements in the list.
  */
  for(const int* beg =int_list.begin();beg!=int_list.end();beg++){
    std::cout<<*beg<<" ";
  }
}

int main(int argc, char const *argv[]) {
  initializer_list<int> int_list = {1,2,3,4,5,6};
  page_222_6_27(int_list);
  return 0;
}
