#include "Arm.h"

double Arm::get_max_power() const {return max_power;}

void Arm::get_parts(){
std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Arm::view_parts(){
std::cout<<"Arm Max Power:"<<max_power<<std::endl
<<"Arm Part Name: "<<name<<std::endl
<<"Arm Model Number: "<<model_number<<std::endl
<<"Arm Part Cost: "<<cost<<std::endl
<<"Arm Part Desription: "<<description<<std::endl
<<"Arm Image Filename: "<<image_filename<<std::endl<<std::endl;
}

void Arm::save(std::ostream& ost){
ost <<"Arm"<<std::endl<<max_power<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Arm::load(std::istream& ist){
ist >>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Arm::set_weight(double part_weight){
weight = part_weight;
}

double Arm::get_weight(){
double weight_1;weight_1=weight;
return weight;
}

double Arm::get_cost(){
double cost_1=cost;
return cost_1;
}
