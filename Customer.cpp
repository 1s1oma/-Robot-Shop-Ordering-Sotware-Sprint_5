#include "Customer.h"

std::string Customer::to_string(){
return name + " (" + std::to_string(number) + ", "+ phone_number + ", " + email_address +") ";
}

std::string Customer::get_customer_name(){
return name;
}

int Customer::get_customer_number(){
return number;
}

std::string Customer::get_customer_phone_number(){
return phone_number;
}

std::string Customer::get_customer_email_address(){
return email_address;
}

void Customer::save(std::ostream& ost){
ost <<"Customer"<<std::endl<<name<<std::endl<<number<<std::endl<<phone_number<<std::endl<<email_address<<std::endl;
}

void Customer::load(std::istream& ist){
ist >>name>>number>>phone_number>>email_address;
}
