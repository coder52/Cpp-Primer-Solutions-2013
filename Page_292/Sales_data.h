#ifndef SALES_DATA_H
#define SALES_DATA_H

/* Page 292
  Exercise 7.41: Rewrite your own version of the Sales_data class to use delegating
  constructors. Add a statement to the body of each of the constructors that prints a
  messagewhenever it is executed. Write declarations to construct a Sales_data object
  in every way possible. Study the output until you are certain you understand the order
  of execution among delegating constructors.
*/

struct Sales_data {
    // constructors
    //1st
    Sales_data():Sales_data("", 0, 0.0) {
      std::cout<< "1th constructor's body has been run."<<std::endl;
    };
    //2nd
    Sales_data(const std::string &s):Sales_data(s, 0, 0.0) {
      std::cout<< "2nd constructor's body has been run."<<std::endl;
    }
    //3rd
    Sales_data(const std::string &s, unsigned n, double p) :
              bookNo(s), units_sold(n), revenue(p*n) {
      std::cout<< "3rd constructor's body has been run."<<std::endl;
    }
    //4th
    Sales_data(std::istream &is):Sales_data(){
      read(is, *this);
      std::cout<< "4th constructor's body has been run."<<std::endl;
    }
    // functions
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
  private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
  // friend functions
  friend std::istream &read (std::istream &, Sales_data &);
  friend std::ostream &print (std::ostream &, const Sales_data &);
  friend Sales_data add (const Sales_data &, const Sales_data &);
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

inline
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
