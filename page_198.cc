#include <iostream>

void page_198_5_23_24_25();

int main(int argc, char const *argv[]) {

  page_198_5_23_24_25();

  return 0;
}

void page_198_5_23_24_25(){
  /* Page 198
  Exercise 5.23: Write a program that reads two integers from the standard input and
  prints the result of dividing the first number by the second.
  Exercise 5.24: Revise your program to throw an exception if the second number is
  zero. Test your program with a zero input to see what happens on your system if you
  don’t catch an exception.
  Exercise 5.25: Revise your program from the previous exercise to use a try block to
  catch the exception. The catch clause should print a message to the user and ask
  them to supply a new number and repeat the code inside the try.
  */
  std::cout<<"Enter two numbers."<<std::endl;
  int x, y;
  while((std::cin>>x)>>y){
    try{
        if(y==0){ // avoid zero division
          throw std::runtime_error("Divider can not be zero!");
        }
        std::cout<<(x*y)<<std::endl;
    } catch(std::runtime_error e){
        std::cout<<e.what()<<"\nDo you wan't to try again\? y/n :";
        char ch;
        std::cin>>ch;
        if(ch=='n')
          break;
    }

  }
}
