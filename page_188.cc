#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

void page_188_5_17();
void page_188_5_16();

int main(int argc, char const *argv[]) {

  // page_188_5_17();
  page_188_5_16();

  return 0;
}

void page_188_5_17(){
  /* Page 188
  Exercise 5.17: Given two vectors of ints, write a program to determine whether
  one vector is a prefix of the other. For vectors of unequal length, compare the number
  of elements of the smaller vector. For example, given the vectors containing 0,
  1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.
  */
  vector<int> vec_1={0, 1, 1, 2};
  vector<int> vec_2={0, 1, 1, 2, 3, 5, 8};
  // get size of smaller vector for the for-loop
  unsigned size = (vec_2.size()<vec_1.size())?vec_2.size():vec_1.size();
  // compare elements of smaller vector with elements of bigger.
  // if any elements are not equal respectively check_suffix=false and exit the loop
  bool check_suffix=true;
  for(vector<int>::size_type i=0;i<size;i++){
    if(vec_1[i]!=vec_2[i]){
      check_suffix=false;
      break;
    }
  }
  std::cout<<((check_suffix!=0)?"true":"false");
}

void page_188_5_16(){
  /* Page 188
    Exercise 5.16: The while loop is particularly good at executing while some condition
  holds; for example, when we need to read values until end-of-file. The for loop is
  generally thought of as a step loop: An index steps through a range of values in a
  collection. Write an idiomatic use of each loop and then rewrite each using the other
  loop construct. If you could use only one loop, which would you choose? Why?
  */
  // let's solve page_185_5_14 with for loop We read the entries there with while
  //loop, here we will read them with for loop and our job will be a little more difficult.
  std::cout<<"Write short words with space between them."<<std::endl;
  string str;
  getline(std::cin,str);
  // add a space on end of str, thus we can guarantee to getting last word
  str+=" ";
  // create a vector for words.
  vector<string> words;
  string word;
  // add each word in the words.
  for(char ch:str){
    if (isalpha(ch)) {
      word+=ch;
    }  else {
      if(!word.empty()) // filter empty words
        words.push_back(word);
      word="";
    }
  }
  // create temporary and permanent variables
  string duplicated_word = "", flag;
  unsigned num_of_dup = 0, count=0;
  // compare each word with the others in the vector
  // count and save number of copies
  for(vector<string>::size_type i=0; i!=words.size();i++ ){
    flag=words[i];
    for(vector<string>::size_type j=0; j!=words.size();j++ ){
      if((i!=j) && (flag==words[j])){
        count++;
      }
    }
    // if current word appears more than before save it
    if(count>num_of_dup){
      num_of_dup=count;
      duplicated_word=flag;
    }
    count=0;  // reset counter for each word
  }

  // print
  if(num_of_dup>0) // if any word is repeated
    // don't forget adding orginal word (num_of_dup+1)
    std::cout<<"The word \""<<duplicated_word<<"\" occurred "<<num_of_dup+1<<" times."<<std::endl;
  else  // if words are occurred just 1 time
    std::cout<<"No word was repeated."<<std::endl;
}
