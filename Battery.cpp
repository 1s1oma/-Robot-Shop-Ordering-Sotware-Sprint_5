#include "Battery.h"

double Battery::get_power_available() const {return power_available;}
double Battery::get_max_energy() const {return max_energy;}

void Battery::get_parts(){
std::cin>>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename;
}

void Battery::view_parts(){
std::cout<<"Battery Power available: "<<power_available<<std::endl
<<"Battery Max energy:"<<max_energy<<std::endl
<<"Battery Part Name: "<<name<<std::endl
<<"Battery Model Number: "<<model_number<<std::endl
<<"Battery Part Cost: "<<cost<<std::endl
<<"Battery Part Desription: "<<description<<std::endl
<<"Battery Image Filename: "<<image_filename<<std::endl<<std::endl;
}

void Battery::save(std::ostream& ost){
ost <<"Battery"<<std::endl<<power_available<<std::endl<<max_energy<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Battery::load(std::istream& ist) {
ist >>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename;
}
void Battery::set_weight(double part_weight){
weight = part_weight;
}

double Battery::get_weight(){
return weight;
}

double Battery::get_cost(){
double cost_1=cost;
return cost_1;
}
