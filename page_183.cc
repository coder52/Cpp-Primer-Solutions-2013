#include <iostream>
#include <string>

using std::string;

void page_183_5_12();
void page_183_5_9_10_11();

int main(int argc, char const *argv[]) {

  // page_183_5_12();
  page_183_5_9_10_11();

  return 0;
}


void page_183_5_12(){
  /* Page 183
  Exercise 5.12: Modify our vowel-counting program so that it counts the number of
  occurrences of the following two-character sequences: ff, fl, and fi.
  */

  string str;
  std::cout<<"Enter a text please."<<std::endl;
  getline(std::cin,str);

  unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0, blnkCnt=0, tabCnt=0, newLineCnt=0;
  unsigned ffCnt=0, flCnt=0, fiCnt=0;

  unsigned flag=1; // for getting next char from str in each circle
  for(char ch:str){
    if(ch=='a'||ch=='A') aCnt++;
    if(ch=='e'||ch=='E') eCnt++;
    if(ch=='i'||ch=='I') iCnt++;
    if(ch=='o'||ch=='O') oCnt++;
    if(ch=='u'||ch=='U') uCnt++;
    if(ch==' ') blnkCnt++;
    if(ch=='\t') tabCnt++;
    if(ch=='\n') newLineCnt++;
    // in each circle str[flag] will next char after ch.
    if(str[flag]!='\0'){ // don't check if str[flag] comes end.
      if(ch=='f'&&str[flag]=='f') ffCnt++;
      if(ch=='f'&&str[flag]=='l') flCnt++;
      if(ch=='f'&&str[flag]=='i') fiCnt++;
    }
    flag++;
  }

  // print results
  std::cout << "Number of vowel a: \t" << aCnt << '\n'
            << "Number of vowel e: \t" << eCnt << '\n'
            << "Number of vowel i: \t" << iCnt << '\n'
            << "Number of vowel o: \t" << oCnt << '\n'
            << "Number of vowel u: \t" << uCnt << '\n'
            << "Number of blanks: \t" << blnkCnt << '\n'
            << "Number of tabs: \t" << tabCnt << '\n'
            << "Number of new lines: \t" << newLineCnt <<  '\n'
            << "Number of \"ff\": \t" << ffCnt << '\n'
            << "Number of \"fl\": \t" << flCnt << '\n'
            << "Number of \"fi\": \t" << fiCnt << std::endl;
}

void page_183_5_9_10_11(){
  /* Page 183
  Exercise 5.9: Write a program using a series of if statements to count the number of
  vowels in text read from cin.
  Exercise 5.10: There is one problem with our vowel-counting program as we’ve implemented
  it: It doesn’t count capital letters as vowels. Write a program that counts
  both lower- and uppercase letters as the appropriate vowel—that is, your program
  should count both ’a’ and ’A’ as part of aCnt, and so forth.
  Exercise 5.11: Modify our vowel-counting program so that it also counts the number
  of blank spaces, tabs, and newlines read.
  */

  string str;
  std::cout<<"Enter a text please."<<std::endl;
  getline(std::cin,str);

  unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0, blnkCnt=0, tabCnt=0, newLineCnt=0;
  for(char ch:str){
    if(ch=='a'||ch=='A') aCnt++;
    if(ch=='e'||ch=='E') eCnt++;
    if(ch=='i'||ch=='I') iCnt++;
    if(ch=='o'||ch=='O') oCnt++;
    if(ch=='u'||ch=='U') uCnt++;
    if(ch==' ') blnkCnt++;
    if(ch=='\t') tabCnt++;
    if(ch=='\n') newLineCnt++;
  }
  // print results
  std::cout << "Number of vowel a: \t" << aCnt << '\n'
            << "Number of vowel e: \t" << eCnt << '\n'
            << "Number of vowel i: \t" << iCnt << '\n'
            << "Number of vowel o: \t" << oCnt << '\n'
            << "Number of vowel u: \t" << uCnt << '\n'
            << "Number of blanks: \t" << blnkCnt << '\n'
            << "Number of tabs: \t" << tabCnt << '\n'
            << "Number of new lines: \t" << newLineCnt << std::endl;
}
