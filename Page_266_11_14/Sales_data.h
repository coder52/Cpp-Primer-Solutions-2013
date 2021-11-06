#ifndef SALES_DATA_H
#define SALES_DATA_H

/* Page 266
Exercise 7.11: Add constructors to your Sales_data class and write a program to
use each of the constructors.
Exercise 7.14: Write a version of the default constructor that explicitly
initializes the members to the values we have provided as in-class initializers.
        answer 7.14: comment default constructor and write;
        Sales_data():bookNo(""), units_sold(0), revenue(0.0) {}
*/

struct Sales_data {
  // constructors
  Sales_data() = default;
  Sales_data(const std::string &s):bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p) :
            bookNo(s), units_sold(n), revenue(p*n) {}
  // functions
  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
  // data members are unchanged from § 2.6.1 (p. 72)
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this; // return the object on which the function was called
}

double Sales_data::avg_price() const {
  if (units_sold)
    return revenue/units_sold;
  else
    return 0;
}

Sales_data add (const Sales_data &data_1, const Sales_data &data_2) {
  Sales_data sum = data_1;
  sum.combine(data_2);
  return sum;
}

// The IO classes are types that cannot be copied, so we may only
// pass them by reference iostream
std::istream &read (std::istream &is, Sales_data &data){
  // input transactions contain ISBN, number of copies sold, and sales price
  double price = 0;
  is >> data.bookNo >> data.units_sold >> price;
  data.revenue = data.units_sold * price;
  return is;
}

std::ostream &print (std::ostream &os, const Sales_data &data){
  os << data.isbn() <<" "<< data.units_sold <<" "<<
        data.revenue <<" "<< data.avg_price();  // avg_price must const
  return os;                                       // when Sales_data const
}

#endif
