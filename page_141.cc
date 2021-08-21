#include <iostream>
#include <string>

using std::string;

void page_141_Ex_4_6();
void page_141_Ex_4_4();

int main(int argc, char const *argv[]) {

  page_141_Ex_4_4();
  // page_141_Ex_4_6();

  return 0;
}

void page_141_Ex_4_4(){
  /* page 141
    Exercise 4.4: Parenthesize the following expression to show how it is evaluated. Test
    your answer by compiling the expression (without parentheses) and printing its result.
        12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
  */
  std::cout<<12 / 3 * 4 + 5 * 15 + 24 % 4 / 2<<std::endl;
  std::cout<<((((12 / 3) * 4) + (5 * 15)) + (24 % (4 / 2)))<<std::endl;
}

void page_141_Ex_4_6(){
  /* Page 141
    Exercise 4.6: Write an expression to determine whether an int value is even or odd.
  */
    std::cout<<"Please enter a number."<<std::endl;

    int i;

    while(std::cin>>i && i!='q'){
      string str = i%2==1 ? "odd":"even";

      std::cout<<"The value is "<<str+'.'<<std::endl;
    }
}
