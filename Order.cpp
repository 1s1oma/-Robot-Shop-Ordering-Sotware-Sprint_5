#include "Order.h"

double Order::robot_cost(){
return 0.0;
}

double Order::extended_price(){
return 0.0;
}

void Order::to_string(){
//string order =
std::cout << "Order Number: "<<std::to_string(order_number)<<std::endl<<"Order Status "<<std::to_string(status)<<std::endl<<"Date "<<date
<<std::endl<<"Customer "<<customer.to_string()<<std::endl<<"Sales Associate "<<sales_associate.to_string()<<std::endl;
//robot_model_order.get_parts(); FIX
//return order;
}

void Order::save(std::ostream& ost){
ost <<"Order"<<std::endl<<order_number<<std::endl<<date<<std::endl;
customer.Customer::save(ost);
sales_associate.Sales_associate::save(ost);
robot_model_order.Robot_model::save(ost);
}

void Order::load(std::istream& ist){
ist >>order_number>>date;
customer.Customer::load(ist);
sales_associate.Sales_associate::load(ist);
robot_model_order.Robot_model::load(ist);
}
