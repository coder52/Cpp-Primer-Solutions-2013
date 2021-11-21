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
    friend std::ostream &print_screen(std::ostream &, const Screen &);
  public:
    using pos = std::string::size_type;   // typdef unsigned pos;
    //constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
    Screen(pos ht, pos wd, char ch) : height(ht), width(wd), contents(ht*wd, ch) {}
  private:
    pos cursor;           // position of cursor on the screen
    pos height = 0, width = 0;    // height and width of the screen
    std::string contents;
};

std::ostream &print_screen(std::ostream &os, const Screen &sc){
  static unsigned count=0;
  os<<"Screen "<<count++<<" :"<<sc.height<<"x"<<sc.width<<std::endl;
  for(unsigned i=0; i<sc.height;i++){
    for(unsigned j=0; j<sc.width;j++){
      os<<sc.contents[(i*sc.width + j)];
    }
    std::cout<<std::endl;
  }
  return os;
}
