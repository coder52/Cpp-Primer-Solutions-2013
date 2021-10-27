#include <iostream>
#include <string>

using namespace std;

// page_230_6_38
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
// returns a reference to an array of five int elements
decltype(odd) &page_230_6_38(int i);

int main() {

  int (&nums)[5] = page_230_6_38(1);
  for(auto i:nums){
    cout<<i<<" ";
  }

}

decltype(odd) &page_230_6_38(int i) {
  return (i % 2) ? odd : even; // returns a pointer to the array
}
