#include <iostream>

void page_174_Ex_5_3();

int main(int argc, char const *argv[]) {

  page_174_Ex_5_3();

  return 0;
}
void page_174_Ex_5_3(){
  /* Page 174
  Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from
  § 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this rewrite improves
  or diminishes the readability of this code.
  */
  int sum = 0, val = 1;

  while (val <= 10)
  sum += val, ++val;

  std::cout << "Sum of 1 to 10 inclusive is "
  << sum << std::endl;
}
