#include <iostream>
#include <vector>
#include <cassert>

using namespace::std;

void page243_6_47(vector<int> vec);

int main(int argc, char const *argv[]) {

  vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
  page243_6_47(vec);

  return 0;
}

/* Page 243
Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p. 228) that
used recursion to print the contents of a vector to conditionally print information
about its execution. For example, you might print the size of the vector on each call.
Compile and run the program with debugging turned on and again with it turned off.
*/

void page243_6_47(vector<int> vec){
  vector<int>::size_type vec_size = vec.size();

  // #define NDEBUG    // if you want to not run #ifndef-#endif uncomment this
  #ifndef NDEBUG
  cout<<"Size of vector is "<<vec_size<<"."<<endl;
  #endif

  if(vec_size!=0){
    cout<< vec[0] <<" ";    // print then increment to next container
    vec.erase(vec.begin());
    page243_6_47(vec);
  }
}
