#ifndef SALES_DATA_H
#define SALES_DATA_H

/*
Exercise 7.2: Add the combine and isbn members to the Sales_data class you
wrote for the exercises in § 2.6.2 (p. 76).
Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
these members.
*/

struct Sales_data {

  // new members: operations on Sales_data objects
  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);
  // data members are unchanged from § 2.6.1 (p. 72)
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold; // add the members of rhs into
  revenue += rhs.revenue; // the members of ‘‘this’’ object
  return *this; // return the object on which the function was called
}

#endif
