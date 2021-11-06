#include <iostream>
#include <string>
#include "Sales_data.h"

/* Page 266
Exercise 7.12: Move the definition of the Sales_data constructor that takes an
istream into the body of the Sales_data class.
Exercise 7.13: Rewrite the program from page 255 to use the istream constructor.
*/

/*
If we give this program the following input
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
our output is
0-201-78345-X 5 110 22
*/

int main(int argc, char const *argv[]) {

  Sales_data total(std::cin); // variable to hold data for the next transaction
  // read the first transaction and ensure that there are data to process
  if (!total.isbn().empty()) { // check bookNo
    Sales_data trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (!(trans={std::cin}).isbn().empty()) { // initialize and check bookNo
      // if we’re still processing the same book
      if (total.isbn() == trans.isbn()){
        total = add(total, trans);   // update the running total
      } else {
        // print results for the previous book
        print(std::cout, total);
        std::cout << std::endl;
        total = trans; // total now refers to the next book
      }
    }
    print(std::cout, total);
    std::cout << std::endl;
  } else {
    // no input! warn the user
    std::cout << "No data?!" << std::endl;
    return -1; // indicate failure
  }

  return 0;
}
