#include <iostream>
#include <vector>


void page_117_exercise_3_31_32();

int main(int argc, char const *argv[]) {

  page_117_exercise_3_31_32();

  return 0;
}


void page_117_exercise_3_31_32(){
  /* Page 117
  Exercise 3.31: Write a program to define an array of ten ints. Give each element the
  same value as its position in the array.
  Exercise 3.32: Copy the array you defined in the previous exercise into another array.
  Rewrite your program to use vectors.
  */
  constexpr size_t array_size = 10;
  // int ia[array_size];
  std::vector<int> ia(array_size);
  for (size_t ix = 0; ix != array_size; ++ix)
    ia[ix] = ix;

  // int nia[array_size];
  std::vector<int> nia(array_size);
  for(auto i=0; i!=array_size;i++){
    nia[i]=ia[i];
  }

  for(int i:nia)
    std::cout<<i<<" ";

}
