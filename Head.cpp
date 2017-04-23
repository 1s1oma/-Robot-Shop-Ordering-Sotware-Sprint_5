#include "Head.h"

double Head::get_power() const {return power;}

void Head::get_parts(){
std::cin>>power>>name>>model_number>>cost>>description>>image_filename;
}

void Head::view_parts(){
std::cout<<"Head Power:"<<power<<std::endl
<<"Head Part Name: "<<name<<std::endl
<<"Head Model Number: "<<model_number<<std::endl
<<"Head Part Cost: "<<cost<<std::endl
<<"Head Part Desription: "<<description<<std::endl
<<"Head Image Filename: "<<image_filename<<std::endl<<std::endl;
}

void Head::save(std::ostream& ost){
ost <<"Head"<<std::endl<<power<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Head::load(std::istream& ist){
ist >>power>>name>>model_number>>cost>>description>>image_filename;
}

void Head::set_weight(double part_weight){
weight = part_weight;
}

double Head::get_weight(){
return weight;
}

double Head::get_cost(){
double cost_1=cost;
return cost_1;
}

