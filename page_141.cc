#include <iostream>
#include <string>

using std::string;

void page_141_Ex_4_6();

int main(int argc, char const *argv[]) {

  page_141_Ex_4_6();

  return 0;
}
void page_141_Ex_4_6(){
  /* Page 141 page 141
    Exercise 4.6: Write an expression to determine whether an int value is even or odd.
  */
    std::cout<<"Please enter a number."<<std::endl;
    
    int i;

    while(std::cin>>i && i!='q'){
      string str = i%2==1 ? "odd":"even";

      std::cout<<"The value is "<<str+'.'<<std::endl;
    }
}
