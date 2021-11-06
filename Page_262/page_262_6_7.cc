#include <iostream>
#include <string>
#include "Sales_data.h"

/* Page 262
Exercise 7.6: Define your own versions of the add, read, and print functions.
Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises
in § 7.1.2 (p. 260) to use these new functions.
Exercise 7.8: Why does read define its Sales_data parameter as a plain reference
and print define its parameter as a reference to const?
      --While 'read' changes data in Sales_data.
*/

/*
If we give this program the following input
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
our output is
0-201-78345-X 5 110 22
*/


int main(int argc, char const *argv[]) {

  Sales_data total; // variable to hold data for the next transaction
  // read the first transaction and ensure that there are data to process
  if (read(std::cin, total)) {
    Sales_data trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (read(std::cin, trans)) {
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
