#include "Robot_model.h"

void Robot_model::get_parts(){
std::cout<<"Model Part Details"<<std::endl;
arm.view_parts();
battery.view_parts();
head.view_parts();
locomotor.view_parts();
torso.view_parts();
}

int Robot_model::get_model_num(){
return robot_model_num;
}

void Robot_model::save(std::ostream& ost){
ost <<"Robot_Model"<<std::endl<<robot_model_num<<std::endl;
arm.Arm::save(ost);
battery.Battery::save(ost);
head.Head::save(ost);
torso.Torso::save(ost);
locomotor.Locomotor::save(ost);
}

void Robot_model::load(std::istream& ist){
ist >> robot_model_num;
arm.Arm::load(ist);
battery.Battery::load(ist);
head.Head::load(ist);
torso.Torso::load(ist);
locomotor.Locomotor::load(ist);
}

double Robot_model::get_total_weight(){
double weight_1;
weight_1 = arm.get_weight()+battery.get_weight()+head.get_weight()+locomotor.get_weight()+torso.get_weight();
total_weight=weight_1;
return weight_1;
}

double Robot_model::get_total_cost(){
double cost_1;
cost_1 = arm.get_weight()+battery.get_weight()+head.get_weight()+locomotor.get_weight()+torso.get_weight();
cost_of_parts=cost_1;
return cost_1;
}

void Robot_model::parts_power(){
double power, battery_power;
power = head.get_power()+arm.get_max_power()+locomotor.get_max_power();
battery_power = battery.get_max_energy();
if(power >=battery_power){
power_limited=true;
}
else{
power_limited=false;
}
}

 void Robot_model::get_battery_life(){
double power_consumption, battery_life_1;
power_consumption = head.get_power()+0.4*arm.get_max_power()+0.15*locomotor.get_max_power();
battery_life_1 = 1000*battery.get_max_energy()/power_consumption;
battery_life=battery_life_1;
 }

void Robot_model::set_max_speed(){
model_max_speed =locomotor.get_locomotor_max_speed();
double max_weight_1= 5*locomotor.get_weight();
double sum_weight=total_weight;
if(sum_weight>max_weight_1){
model_max_speed = locomotor.get_locomotor_max_speed()*(max_weight_1/sum_weight);
}
}
/*void Robot_model::get_model_arm(){
arm.view_parts();
}

void Robot_model::get_model_battery(){
battery.view_parts();
}

void Robot_model::get_model_head(){
head.view_parts();
}

void Robot_model::get_model_locomotor(){
locomotor.view_parts();
}

void Robot_model::get_model_torso(){
torso.view_parts();
}*/
