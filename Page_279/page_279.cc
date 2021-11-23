#include <iostream>
#include "class_decleration.h"




int main(int argc, char const *argv[]){

  X x;
  // x.call_y();  // this not works
  x.print();

  Y y;
  y.call_X();
  y.print();

  return 0;
}
