#include <iostream>
#include <string>
#include "Sales_data.h"

/* Page 271
Exercise 7.21: Update your Sales_data class to hide its implementation. The programs
you’ve written to use Sales_data operations should still continue to work.
Recompile those programs with your newclass definition to verify that they still work.
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
  if (read(std::cin, total)) { // read can use because it is friend of Sales_data
    Sales_data trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (read(std::cin, trans)) { // read can use because it is friend of Sales_data
      // if we’re still processing the same book
      if (total.isbn() == trans.isbn()){
        total = add(total, trans);   // add is friend of Sales_data
      } else {
        // print results for the previous book
        print(std::cout, total);  // print is friend of Sales_data
        std::cout << std::endl;
        total = trans; // total now refers to the next book
      }
    }
    print(std::cout, total); // print is friend of Sales_data
    std::cout << std::endl;
  } else {
    // no input! warn the user
    std::cout << "No data?!" << std::endl;
    return -1; // indicate failure
  }

  return 0;
}
