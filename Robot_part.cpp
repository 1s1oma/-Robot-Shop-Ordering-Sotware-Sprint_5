#include "Robot_part.h"

std::string Robot_part::get_name()const {return name;}

int Robot_part::get_model_number() const {return model_number;}

double Robot_part::get_cost()const {return cost;}

std::string Robot_part::get_description() const {return description;}

std::string Robot_part::get_image_filename()const {return image_filename;}

void Robot_part::get_parts(){
std::cin>>name>>model_number>>cost>>description>>image_filename;
}

void Robot_part::view_parts(){
std::cout<<"Part Name: "<<name<<std::endl
<<"Model Number: "<<model_number<<std::endl
<<"Part Cost: "<<cost<<std::endl
<<"Part Desription: "<<description<<std::endl
<<"Image Filename: "<<image_filename<<std::endl;
}

void Robot_part::save(std::ostream& ost){
ost <<"Robot_part"<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Robot_part::load(std::istream& ist){
ist >>name>>model_number>>cost>>description>>image_filename;
}

double Robot_part::get_cost(){
double cost_1=cost;
return cost_1;
}
