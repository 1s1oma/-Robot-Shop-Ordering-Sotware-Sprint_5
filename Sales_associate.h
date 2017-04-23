#ifndef SALES_ASSOCIATE_H_INCLUDED
#define SALES_ASSOCIATE_H_INCLUDED

#include <string>
#include<iostream>

class Sales_associate{
public:
Sales_associate(std::string associate_name, int associate_employee_number):
    name(associate_name),employee_number(associate_employee_number){}
    Sales_associate():Sales_associate("0",0){}
    ~Sales_associate(){}
std::string to_string();
std::string get_associate_name();
int get_employee_number();
void save(std::ostream& ost);
void load(std::istream& ist);
private:
std::string name;
int employee_number;
};

#endif // SALES_ASSOCIATE_H_INCLUDED
