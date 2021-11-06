#ifndef SALES_DATA_H
#define SALES_DATA_H

/* Page 262
Exercise 7.6: Define your own versions of the add, read, and print functions.
Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises
in § 7.1.2 (p. 260) to use these new functions.
Exercise 7.8: Why does read define its Sales_data parameter as a plain reference
and print define its parameter as a reference to const?
*/

struct Sales_data {

  // new members: operations on Sales_data objects
  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
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
