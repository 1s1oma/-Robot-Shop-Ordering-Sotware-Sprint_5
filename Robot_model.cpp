#include "Robot_model.h"

void Robot_model::get_parts(){
std::cout<<"Model Part Details"<<std::endl;
if (arm_no==1 && battery_no==1) {
	arm1.view_parts();
	battery1.view_parts();
	head.view_parts();
	locomotor.view_parts();
	torso.view_parts();
}
else if (arm_no==1 && battery_no==2) {
	arm1.view_parts();
	battery1.view_parts();
	battery2.view_parts();
	head.view_parts();
	locomotor.view_parts();
	torso.view_parts();
}
	else if (arm_no ==1 && battery_no == 3) {
arm1.view_parts();
arm2.view_parts();
battery1.view_parts();
battery2.view_parts();
battery3.view_parts();
head.view_parts();
locomotor.view_parts();
torso.view_parts();
	}
	else if (arm_no ==2 &&battery_no == 1) {
arm1.view_parts();
arm2.view_parts();
battery1.view_parts();
head.view_parts();
locomotor.view_parts();
torso.view_parts();
	}
	else if (arm_no == 2 && battery_no == 2) {
		arm1.view_parts();
		arm2.view_parts();
		battery1.view_parts();
		battery2.view_parts();
		head.view_parts();
		locomotor.view_parts();
		torso.view_parts();
	}
	else if (arm_no == 2 && battery_no == 3) {
		arm1.view_parts();
		arm2.view_parts();
		battery1.view_parts();
		battery2.view_parts();
		battery3.view_parts();
		head.view_parts();
		locomotor.view_parts();
		torso.view_parts();
	}
	else {
		arm1.view_parts();
		battery1.view_parts();
		head.view_parts();
		locomotor.view_parts();
		torso.view_parts();
	}
}

int Robot_model::get_model_num(){
return robot_model_num;
}

void Robot_model::save(std::ostream& ost){
ost <<"Robot_Model"<<std::endl<<robot_model_num<<std::endl;
arm1.Arm::save(ost);
battery1.Battery::save(ost);
head.Head::save(ost);
torso.Torso::save(ost);
locomotor.Locomotor::save(ost);
}

void Robot_model::load(std::istream& ist){
ist >> robot_model_num;
arm1.Arm::load(ist);
battery1.Battery::load(ist);
head.Head::load(ist);
torso.Torso::load(ist);
locomotor.Locomotor::load(ist);
}

double Robot_model::get_total_weight(){
double weight_1;
weight_1 = arm1.get_weight()+ arm2.get_weight()+battery1.get_weight()+battery2.get_weight()+battery3.get_weight()+head.get_weight()+locomotor.get_weight()+torso.get_weight();
total_weight=weight_1;
return weight_1;
}

double Robot_model::get_total_cost(){
double cost_1;
cost_1 = arm1.get_cost()+arm2.get_cost()+battery1.get_cost()+battery2.get_cost()+battery3.get_cost()+head.get_cost()+locomotor.get_cost()+torso.get_cost();
cost_of_parts=cost_1;
return cost_1;
}

void Robot_model::parts_power(){
double power, battery_power;
power = head.get_power()+arm1.get_max_power()+arm2.get_max_power()+locomotor.get_max_power();
battery_power = battery1.get_max_energy()+ battery2.get_max_energy()+ battery3.get_max_energy();
if(power >=battery_power){
power_limited=true;
}
else{
power_limited=false;
}
}

 void Robot_model::get_battery_life(){
double power_consumption, battery_life_1;
power_consumption = head.get_power()+0.4*(arm1.get_max_power()+arm2.get_max_power())+0.15*locomotor.get_max_power();
battery_life_1 = 1000*battery1.get_max_energy()/power_consumption;
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

void Robot_model::set_arm_no(int arm_val) {
	arm_no = arm_val;
}
void Robot_model::set_battery_no(int battery_val) {
	battery_no = battery_val;
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
