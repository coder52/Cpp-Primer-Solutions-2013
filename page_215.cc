#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;

// Instead class, let's define a struct for Exercise 6.18a
struct matrix{};

void page_215_6_17_a(string s);
void page_215_6_17_b(string s);
//Page 215 Exercise 6.18 a:  There is no defination for this decleration
bool compare(matrix m1, matrix m2);
//Page 215 Exercise 6.18 b:
vector<int> change_val(int n, vector<int>::iterator iter);

int main(int argc, char const *argv[]) {
  string s = "Hello World!";
  // page_215_6_17_a(s);
  // page_215_6_17_b(s);

  //////////////////////////////////////////////////////
  //Page 215 Exercise 6.18 b:
  vector<int> nums_vec={0,1,2,3,4,-1}; // marked nums_vec with -1 thus we can find last element
  int i=3;
  vector<int> vec = change_val(i,nums_vec.begin());
  for(int i:vec){
    std::cout<<i<<", ";
  }
  //////////////////////////////////////////////////////
  return 0;
}

void page_215_6_17_a(string s){
  /* Page 215
    Exercise 6.17: Write a function to determine whether a string contains any capital
    letters. Write a function to change a string to all lowercase. Do the parameters you
    used in these functions have the same type? If so, why? If not, why not?
  */
  unsigned n = 0;
  for(char ch:s){
    if(isupper(ch)){
      n++;
    }
  }
  std::cout<< "Number of capital letters : " << n << std::endl;
}

void page_215_6_17_b(string s){
  /*
    Exercise 6.17: Write a function to determine whether a string contains any capital
    letters. Write a function to change a string to all lowercase. Do the parameters you
    used in these functions have the same type? If so, why? If not, why not?
  */
  for(char &ch:s){
    ch=tolower(ch);
  }
  std::cout<< s << std::endl;
}

// Page 215 Exercise 6.18 b:
vector<int> change_val(int n, vector<int>::iterator iter){
  /*
  Exercise 6.18: Write declarations for each of the following functions. When you write these
  declarations, use the name of the function to indicate what the function does.
  (a) A function named compare that returns a bool and has two parameters that
  are references to a class named matrix.
  (b) A function named change_val that returns a vector<int> iterator and takes
  two parameters: One is an int and the other is an iterator for a vector<int>.
  */
  vector<int> vec;
  while(*iter!=-1){
    vec.push_back((*iter)*n);
    iter++;
  }
  return vec;
}
