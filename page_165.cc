#include <iostream>
#include <string>

using std::string;

void page_165_4_36();
void page_165_4_37();

int main(int argc, char const *argv[]) {

  // page_165_4_36();
  page_165_4_37();

  return 0;
}

void page_165_4_36(){
  /* page 165
    Exercise 4.36: Assuming i is an int and d is a double write the expression i *= d so
  that it does integral, rather than floating-point, multiplication.
  */

  double d=4.32;
  int i=5.0;
  i*=static_cast<int>(d);

  std::cout<<i;
}

void page_165_4_37(){
  /*
    Exercise 4.37: Rewrite each of the following old-style casts to use a named cast:
        int i; double d; const string *ps; char *pc; void *pv;
        (a) pv = (void*)ps; (b) i = int(*pc);
        (c) pv = &d; (d) pc = (char*) pv;
  */
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    // pv = (void*)ps;
    pv = const_cast<string*>(ps);
    //i = int(*pc);
    i = static_cast <int> (*pc);
    // pv = &d;
    double *pd = static_cast<double*>(pv);
    // pc = (char*) pv;
    pc = static_cast <char*> (pv);

    std::cout<<"ok."<<std::endl;
}
