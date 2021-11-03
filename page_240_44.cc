#include <iostream>
#include <string>

using namespace::std;

/* Page 240

 Exercise 6.44: Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline.

*/
// Put inline and constexpr Functions in Header Files.

inline const string &
shorterString(const string &s1, const string &s2){
  return s1.size() <= s2.size() ? s1 : s2;
}

int main(int argc, char const *argv[]) {

  string s1 = "aaaaaa";
  string s2 = "bbbb";

  std::cout<<(shorterString(s1,s2));

  return 0;
}
