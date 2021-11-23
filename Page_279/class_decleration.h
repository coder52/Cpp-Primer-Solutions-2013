#ifndef CLASS_DECLERATION_H
#define CLASS_DECLERATION_H

/*
Exercise 7.31: Define a pair of classes X and Y, inwhich X has a pointer to Y, and Y has
an object of type X.
*/

class Y;

class X {
  public:
    Y *py;
    /////////////////////
    //This part not works because Y not defined
    // X &call_y(){
    //   py->print()
    //   return this;
    // }
    /////////////////////
    X &print(){
      std::cout<<"This is class X"<<std::endl;
      return *this;
    }

};

class Y {
  public:
    X x;
    Y &call_X(){
      x.print();
      return *this;
    }
    Y &print(){
      std::cout<<"This is class Y"<<std::endl;
      return *this;
    }

};


#endif
