#include <iostream>

int page_205_6_5(int x);
void page_205_6_3_4();

int main(int argc, char const *argv[]) {
  //Exercise 6.3 and 6.4
  page_205_6_3_4();

  // Exercise 6.5
  std::cout<<"Enter a number which you want to get the absolute value of it."<<std::endl;
  int i;
  std::cin>>i;
  int abs =  page_205_6_5(i);
  std::cout<<"Absolute value of "<<i<<" is "<<abs<<"."<<std::endl;

  return 0;
}

int page_205_6_5(int x){
  /* Page 205
  Exercise 6.5: Write a function to return the absolute value of its argument.
  */
  if(x<0)
    x*=-1;
  return x;
}

void page_205_6_3_4(){
  /* Page 205
    Exercise 6.3: Write and test your own version of fact.
    Exercise 6.4: Write a function that interacts with the user, asking for a number and
    generating the factorial of that number. Call this function from main.
  */
  std::cout<<"Enter a number which you want to get the factorial of it."<<std::endl;
  int x;
  std::cin>>x;
  long long fact=0.0;
  if(x>0)
    fact=1;
    for(unsigned i=1;i<=x;i++){
      fact*=i;
    }
  std::cout<<"\n"<<fact<<std::endl;
  std::cout<<"Factorial of "<<x<<" is "<<fact<<"."<<std::endl;
}
