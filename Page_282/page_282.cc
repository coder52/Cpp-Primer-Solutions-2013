#include <iostream>
#include "Screen.h"

/* Page 282
  Exercise 7.32: Define your own versions of Screen and Window_mgr in which
  clear is a member of Window_mgr and a friend of Screen.
*/

int main(int argc, char const *argv[]){


  Window_mgr wmgr;
  wmgr.clear(0);

  return 0;
}
