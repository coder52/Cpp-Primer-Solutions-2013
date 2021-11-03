#include <iostream>
#include <string>
#include "Sales_data.h"

/*
Exercise 7.2: Add the combine and isbn members to the Sales_data class you
wrote for the exercises in § 2.6.2 (p. 76).
Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
these members.
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
  if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      // if we’re still processing the same book
      if (total.isbn() == trans.isbn()){
        total.combine(trans);   // // update the running total
      } else {
        // print results for the previous book
        std::cout << total.isbn() <<" "<< total.units_sold
                  <<" "<< total.revenue <<" "<< total.revenue/total.units_sold
                  << std::endl;
        total = trans; // total now refers to the next book
      }
    }
    std::cout << total.isbn() <<" "<< total.units_sold
              <<" "<< total.revenue <<" "<< total.revenue/total.units_sold
              << std::endl;
  } else {
    // no input! warn the user
    std::cout << "No data?!" << std::endl;
    return -1; // indicate failure
  }

  return 0;
}
