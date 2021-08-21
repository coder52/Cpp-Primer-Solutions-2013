#include <iostream>
#include <string>

using std::string;

void page_178_Ex_5_5_6();

int main(int argc, char const *argv[]) {

  page_178_Ex_5_5_6();

  return 0;
}

void page_178_Ex_5_5_6(){
  /* Page 178
    Exercise 5.5: Using an if–else statement, write your own version of the program to
  generate the letter grade from a numeric grade.
    Exercise 5.6: Rewrite your grading program to use the conditional operator (§ 4.7,
  p. 151) in place of the if–else statement.
  */

  int grade;
  string letter_grade;

  std::cout<<"Enter the grade : ";
  std::cin>>grade;
  //Exercise 5.5
  // if(grade==100){
  //   letter_grade="A+";
  // } else if (grade>90){
  //   letter_grade="A";
  // } else if (grade>70){
  //   letter_grade="B";
  // } else if (grade>50){
  //   letter_grade="C";
  // } else if (grade>40){
  //   letter_grade="F";
  // } else {
  //   letter_grade="E";
  // }
  //Exercise 5.6
  letter_grade = (grade==100)?"A+":
                  (grade>90)?"A":
                  (grade>70)?"B":
                  (grade>50)?"C":
                  (grade>40)?"F": "E";
  std::cout<<"Your grade is "<<letter_grade<<"."<<std::endl;

}
