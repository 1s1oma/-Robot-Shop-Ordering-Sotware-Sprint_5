#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include <string>
#include<iostream>

class Customer{
public:
Customer(std::string customer_name, int customer_number, std::string customer_phone_number, std::string customer_email_address):
    name(customer_name), number(customer_number), phone_number(customer_phone_number), email_address(customer_email_address){}
    Customer():Customer("0",0,"0","0"){}
std::string to_string();
std::string get_customer_name();
int get_customer_number();
std::string get_customer_phone_number();
std::string get_customer_email_address();
void save(std::ostream& ost);
void load(std::istream& ist);
private:
std::string name;
int number;
std::string phone_number;
std::string email_address;
 };

#endif // CUSTOMER_H_INCLUDED
