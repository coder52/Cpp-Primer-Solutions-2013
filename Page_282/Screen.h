#ifndef SCREEN_H
#define SCREEN_H

#include <vector>

/* Page 282
  Exercise 7.32: Define your own versions of Screen and Window_mgr in which
  clear is a member of Window_mgr and a friend of Screen.
*/
class Screen;

class Window_mgr{
public:
  // location ID for each screen on the window
  using ScreenIndex = std::vector<Screen>::size_type;
  // reset the Screen at the given position to all blanks
  void clear(ScreenIndex);
private:
  std::vector<Screen> screens{};
};

class Screen{
  //friend
  friend void Window_mgr::clear(ScreenIndex);
  public:
    using pos = std::string::size_type;   // typdef unsigned pos;
    //constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, '-') {}
    Screen(pos ht, pos wd, char ch) : height(ht), width(wd), contents(ht*wd, ch) {}
  private:
    pos cursor;           // position of cursor on the screen
    pos height = 0, width = 0;    // height and w idth of the screen
    std::string contents;
    void do_display(std::ostream &) const;
};

inline
void Window_mgr::clear(ScreenIndex i){
  screens[0] = Screen(24, 80, ' ');
  // s is a reference to the Screen we want to clear
  Screen &s = screens[i];
  // reset the contents of that Screen to all blanks
  s.contents = std::string(s.height * s.width, ' ');
}


#endif
