#include "Sales_associate.h"

std::string Sales_associate::to_string(){
return name + " (" + std::to_string(employee_number) +") ";
}

std::string Sales_associate::get_associate_name(){
return name;
}

int Sales_associate::get_employee_number(){
return employee_number;
}

void Sales_associate::save(std::ostream& ost){
ost <<"Sales_associate"<<std::endl<<name<<std::endl<<employee_number<<std::endl;
}

void Sales_associate::load(std::istream& ist){
ist >>name>>employee_number;
}
