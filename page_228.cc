#include <iostream>
#include <vector>

using namespace std;

void page228_6_33_solI(vector<int>::iterator beg, vector<int>::iterator end){
  /*Page 228 Solution I
   Exercise 6.33: Write a recursive function to print the contents of a vector.
  */
  if(beg<end){
    cout<< *beg++ <<" ";    // print then increment to next container
    page228_6_33_solI(beg, end);
  }
}

void page228_6_33_sol_II(vector<int> vec){
  /*Page 228 Solution II
   Exercise 6.33: Write a recursive function to print the contents of a vector.
  */
  if(vec.size()!=0){
    cout<< vec[0] <<" ";    // print then increment to next container
    vec.erase(vec.begin());
    page228_6_33_sol_II(vec);
  }
}

int main(int argc, char const *argv[]) {

  vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
  // page228_6_33_solI(vec.begin(),vec.end());
  page228_6_33_sol_II(vec);
  return 0;
}
