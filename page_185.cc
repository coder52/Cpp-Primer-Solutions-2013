#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

void page_185_5_14();

int main(int argc, char const *argv[]) {

  page_185_5_14();

  return 0;
}

void page_185_5_14(){
  /* Page 185
    Exercise 5.14: Write a program to read strings from standard input looking for duplicated
    words. The program should find places in the input where one word is followed
    immediately by itself. Keep track of the largest number of times a single repetition
    occurs and which word is repeated. Print the maximum number of duplicates, or
    else print a message saying that no word was repeated. For example, if the input is
    how now now now brown cow cow
    the output should indicate that the word now occurred three times.
  */

    std::cout<<"Write short words with space between them."<<std::endl;
    std::cout<<"Enter \"q\" for result."<<std::endl;
    string str;
    // create a vector for words.
    vector<string> words;
    // add each word in the words.
    while(std::cin>>str){
      if(str=="q") break;
      words.push_back(str);
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
