#include <iostream>
#include <string>

using namespace std;

string make_plural(const size_t ctr, const string &word, const string &ending = "s");

int main(int argc, char const *argv[]) {

  string s1 = "success";
  string s2 = "failure";

  cout<<make_plural(1,s1)<<endl;
  cout<<make_plural(2,s1,"es")<<endl;
  cout<<make_plural(1,s2)<<endl;
  cout<<make_plural(2,s2)<<endl;

  return 0;
}

/*
Exercise 6.42: Give the second parameter of make_plural (§ 6.3.2, p. 224) a default
argument of ’s’. Test your program by printing singular and plural versions of the
words success and failure.
*/
string make_plural(const size_t ctr, const string &word, const string &ending) {
  return (ctr > 1) ? word + ending : word;
}
