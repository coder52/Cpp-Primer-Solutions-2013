#include <iostream>
#include "Screen.h"

using std::cout;
/* Page 278
Exercise 7.27: Add the move, set, and display operations to your version of
Screen. Test your class by executing the following code:
      Screen myScreen(5, 5, ’X’);
      myScreen.move(4,0).set(’#’).display(cout);
      cout << "\n";
      myScreen.display(cout);
      cout << "\n";
Exercise 7.28: What would happen in the previous exercise if the return type of
move, set, and display was Screen rather than Screen&?
Exercise 7.29: Revise your Screen class so that move, set, and display functions
return Screen and check your prediction from the previous exercise.
Exercise 7.30: It is legal but redundant to refer to members through the this
pointer.Discuss the pros and cons of explicitly using the this pointer to
access members.
*/

int main(int argc, char const *argv[]){

  Screen myScreen(5, 5, 'X');
  myScreen.move(4,0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";

  return 0;
}
