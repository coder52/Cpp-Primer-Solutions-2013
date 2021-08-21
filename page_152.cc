#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

void page_152_Ex_4_21();
void page_152_Ex_4_22();
void page_152_Ex_4_23();

int main(int argc, char const *argv[]) {

  // page_152_Ex_4_21();
  // page_152_Ex_4_21();
  page_152_Ex_4_21();

  return 0;
}

void page_152_Ex_4_23(){
  /*
  Exercise 4.23: The following expression fails to compile due to operator precedence.
  Using Table 4.12 (p. 166), explain why it fails. How would you fix it?
    string s = "word";
    string pl = s + s[s.size() - 1] == ’s’ ? "" : "s" ;
  */
  string s = "word";
  string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ; // add 's' at end of string if has not

  std::cout<<pl;
}

void page_152_Ex_4_22(){
  /*page 152
  Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to
  also assign low pass for grades between 60 and 75 inclusive. Write two versions: One
  version that uses only conditional operators; the other should use one or more if
  statements. Which version do you think is easier to understand and why?
*/

  unsigned grade;
  std::cin>>grade;

  string finalgrade = (grade > 90)           ? "high pass" :
                      (grade<75&&grade>=60)  ? "low pass"  :
                      (grade < 60)           ? "fail"      : "pass";
  std::cout<<"result with conditional operators \"?:\" "<< std::endl;
  std::cout<<finalgrade<<std::endl;

  if(grade>90)        finalgrade = "high pass";
  else if(grade>75)   finalgrade = "pass";
  else if(grade>=60)  finalgrade = "low pass";
  else                finalgrade = "fail";
  std::cout<<"result with if-else blocks"<< std::endl;
  std::cout<<finalgrade<<std::endl;
}

void page_152_Ex_4_21(){
  /*
  Exercise 4.21: Write a program to use a conditional operator to find the elements in a
  vector<int> that have odd value and double the value of each such element.
  */
  vector<int> vec={0,1,2,3,4,5,6,7,8,9,10,11};

  for(int &i:vec){
    (i%2) ? i*=i : i;
  }

  for(int &i:vec){
    std::cout<<i<<" ";
  }
}
