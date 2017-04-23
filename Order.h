#ifndef ORDER_H_INCLUDED
#define ORDER_H_INCLUDED

#include "Customer.h"
#include "Robot_model.h"
#include "Sales_associate.h"
 class Order{
 public:
 Order(std::string date_o, Customer customer_o, Sales_associate sales_associate_o, Robot_model robot_model_order_o, int status_o, int order_number_o):
    date(date_o),customer(customer_o),sales_associate(sales_associate_o), robot_model_order(robot_model_order_o), status(status_o), order_number(order_number_o){}
 Order(){}
 ~Order(){}
 double robot_cost();
 double extended_price();
 void to_string();
 void save(std::ostream& ost);
 void load(std::istream& ist);
 private:
 int order_number;
 std::string date;
 Customer customer;
 Sales_associate sales_associate;
 Robot_model robot_model_order;

 int status;
 };


#endif // ORDER_H_INCLUDED
