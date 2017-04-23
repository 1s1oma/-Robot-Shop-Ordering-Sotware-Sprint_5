#include "Locomotor.h"

double Locomotor::get_max_power() const {return max_power;}

void Locomotor::get_parts(){
std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Locomotor::view_parts(){
std::cout<<"Locomotor Max Power:"<<max_power<<std::endl
<<"Locomotor Part Name: "<<name<<std::endl
<<"Locomotor Model Number: "<<model_number<<std::endl
<<"Locomotor Part Cost: "<<cost<<std::endl
<<"Locomotor Part Desription: "<<description<<std::endl
<<"Locomotor Image Filename: "<<image_filename<<std::endl<<std::endl;
}

void Locomotor::save(std::ostream& ost){
ost <<"Locomotor"<<std::endl<<max_power<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Locomotor::load(std::istream& ist){
ist >>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Locomotor::set_locomotor_max_speed(double speed){
locomotor_max_speed=speed;
}

double Locomotor::get_locomotor_max_speed(){
return locomotor_max_speed;
}

void Locomotor::set_weight(double part_weight){
weight = part_weight;
}

double Locomotor::get_weight(){
return weight;
}

double Locomotor::get_cost(){
double cost_1=cost;
return cost_1;
}
