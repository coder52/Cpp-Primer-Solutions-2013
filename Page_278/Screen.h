#include <iostream>

/* Page 278
    Exercise 7.27: Add the move, set, and display operations to your version of
    Screen. Test your class by executing the following code:
          Screen myScreen(5, 5, ’X’);
          myScreen.move(4,0).set(’#’).display(cout);
          cout << "\n";
          myScreen.display(cout);
          cout << "\n";
    Exercise 7.28: What would happen in the previous exercise if the return type of move,
    set, and display was Screen rather than Screen&?
    Exercise 7.29: Revise your Screen class so that move, set, and display functions
    return Screen and check your prediction from the previous exercise.
    Exercise 7.30: It is legal but redundant to refer to members through the this pointer.
    Discuss the pros and cons of explicitly using the this pointer to access members.
*/
class Screen{
  public:
    using pos = std::string::size_type;   // typdef unsigned pos;
    //constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, '-') {}
    Screen(pos ht, pos wd, char ch) : height(ht), width(wd), contents(ht*wd, ch) {}
    //member functions
    Screen &move(const pos, const pos);
    Screen &set(const char);
    Screen &set(pos, pos, char);
    Screen display(std::ostream &os) {
      do_display(os);
      return *this;
    };
    const Screen display(std::ostream &os) const {
      do_display(os);
      return *this;
    };

  private:
    pos cursor;           // position of cursor on the screen
    pos height = 0, width = 0;    // height and w idth of the screen
    std::string contents;
    void do_display(std::ostream &) const;
};

inline
Screen &Screen::move(pos row, pos column){
  cursor = row * width + column;
  return *this;
}

inline
Screen &Screen::set(char ch){
  contents[cursor] = ch;
  return *this;
}

inline
Screen &Screen::set(pos row, pos column, char ch){
  cursor = row * width + column;
  contents[cursor] = ch;
  return *this;
}

inline
void Screen::do_display(std::ostream &os) const {
  static unsigned count=0;
  os<<"Screen "<<count++<<" :"<<height<<"x"<<width<<std::endl;
  for(unsigned i=0; i<height;i++){
    for(unsigned j=0; j<width;j++){
      os<<contents[(i*width + j)];
    }
    std::cout<<std::endl;
  }
}
