#include "Torso.h"

int Torso::get_battery_compartments() const {return battery_compartments;}
int Torso::get_max_arms() const {return max_arms;}

void Torso::get_parts(){
std::cin>>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
}

void Torso::view_parts(){
std::cout<<"Torso Battery Compartments: "<<battery_compartments<<std::endl
<<"Torso Max Arms: "<<max_arms<<std::endl
<<"Torso Part Name: "<<name<<std::endl
<<"Torso Model Number: "<<model_number<<std::endl
<<"Torso Part Cost: "<<cost<<std::endl
<<"Torso Part Desription: "<<description<<std::endl
<<"Torso Image Filename: "<<image_filename<<std::endl<<std::endl;
}

void Torso::save(std::ostream& ost){
ost <<"Torso"<<std::endl<<battery_compartments<<std::endl<<max_arms<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Torso::load(std::istream& ist){
ist >>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
}

void Torso::set_weight(double part_weight){
weight = part_weight;
}

double Torso::get_weight(){
return weight;
}

double Torso::get_cost(){
	return cost;
}
