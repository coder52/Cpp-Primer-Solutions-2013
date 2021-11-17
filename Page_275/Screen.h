#include <iostream>

/* Page 272
  Exercise 7.23: Write your own version of the Screen class.

  Exercise 7.24: Give your Screen class three constructors: a default constructor; a constructor
  that takes values for height and width and initializes the contents to hold the
  given number of blanks; and a constructor that takes values for height, width, and a
  character to use as the contents of the screen.

  Exercise 7.25: Can Screen safely rely on the default versions of copy and assignment?
  If so, why? If not, why not?
*/
class Screen{
    friend std::ostream &print(std::ostream &, const Screen &);
  public:
    using pos = std::string::size_type;   // typdef unsigned pos;
    //constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd) {}
    Screen(pos ht, pos wd, char ch) : height(ht), width(wd), character(ch) {}
  private:
    pos height = 0, width = 0;
    char character = ' ';
};

std::ostream &print(std::ostream &os, const Screen &sc){
  os<<sc.height<<" "<<sc.width<<" "<<sc.character<<std::endl;
  return os;
}
