#ifndef SALES_DATA_H
#define SALES_DATA_H

/*
  Exercise 7.37: Using the version of Sales_data from this section, determine which
  constructor is used to initialize each of the following variables and list the values of the
  data members in each object:
    Sales_data first_item(cin);
    int main() {
      Sales_data next;
      Sales_data last("9-999-99999-9");
    }

  Exercise 7.38: We might want to supply cin as a default argument to the constructor
  that takes an istream&. Write the constructor declaration that uses cin as a default
  argument.

  Exercise 7.39: Would it be legal for both the constructor that takes a string and the
  one that takes an istream& to have default arguments? If not, why not?
  answer: No. Because both of them will default constructor

*/

struct Sales_data {
    // constructors
    ///////////////////////////////////////////////////////////////////////////
    // Exercise 7.37:
    // defines the default constructor as well as one that takes a string argument
    Sales_data(std::string s = " "): bookNo(s) { }  //default value of s is blank caracter
    Sales_data(std::string s, unsigned cnt, double rev):
                    bookNo(s), units_sold(cnt), revenue(rev*cnt) { }
    Sales_data(std::istream &is){
                      read(is, *this);
                    }
    //Exercise 7.38:comment previous constructor and uncomment next constructor.
    //Dont forget to delete from first constructor the default value (= " ")
    // Sales_data(std::istream &is=std::cin){ //cin as  default argument
    //   read(is, *this);
    // }
    ////////////////////////////////////////////////////////////////////////////
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
  return *this; // return the object on which the function was called
}

inline  // Page 275 Exercise 7.26:
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
