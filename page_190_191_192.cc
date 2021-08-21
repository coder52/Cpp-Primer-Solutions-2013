#include <iostream>
#include <string>

using std::string;

void page_192_5_21();
void page_191_5_20();
void page_190_5_19();


int main(int argc, char const *argv[]) {

  // page_192_5_21();
  // page_191_5_20();
  page_190_5_19();

  return 0;
}

void page_192_5_21(){
  /* Page 192
  Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so that
  it looks only for duplicated words that start with an uppercase letter.
  */
  string temp="";
  string word;
  while(std::cin>>word&&word!="q"){ // Enter q for exit
    if(isupper(word[0])&&word==temp){ //  check first letter and equality with before word
      std::cout<<"\""<<word<<"\" occurred twice."<<std::endl;
      break;
    }
    temp=word;
  }
  if(temp!=word)
    std::cout<<"No word was repeated."<<std::endl;
}

void page_191_5_20(){
  /* Page 191
  Exercise 5.20: Write a programto read a sequence of strings from the standard input
  until either the same word occurs twice in succession or all the words have been read.
  Use a while loop to read the text one word at a time. Use the break statement to
  terminate the loop if a word occurs twice in succession. Print the word if it occurs
  twice in succession, or else print a message saying that no word was repeated.
  */
  string temp="";
  string word;
  while(std::cin>>word){
    if(word==temp){
      break;
    }
    if (word=="q") {
      break;
    }
    temp=word;
  }
  if(temp==word){
    std::cout<<"\""<<word<<"\" occurred twice."<<std::endl;
  }
  if(temp!=word){
    std::cout<<"No word was repeated."<<std::endl;
  }
}

void page_190_5_19(){
  /* Page 190
  Exercise 5.19: Write a program that uses a do while loop to repetitively request two
  strings from the user and report which string is less than the other.
  */
  do  {
    string v1, v2;
    std::cout << "Please enter two strings to compare:" ;
    if (std::cin >> v1 >> v2){
      string bigger = (v1>v2)?v1:v2;
      string smaller = (v1<v2)?v1:v2;
      std::cout <<"\""<<bigger << "\" is bigger than \"" << smaller <<"\"."<< std::endl;
    }
  } while (std::cin);
}
