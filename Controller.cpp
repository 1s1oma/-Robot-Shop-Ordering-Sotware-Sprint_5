#include "Controller.h"
#include <iostream>

void Controller::controller_get_arm(){
std::string name, description,image_filename;
int model_number;double cost, max_power, weight_1;

std::cout<<view.get_arm();
std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename>>weight_1;
Arm arm_1(max_power,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Arm(max_power,name,model_number,cost,description,image_filename));
arm_1.set_weight(weight_1);arm = arm_1;
shop.create_new_robot_part(arm_1);
}

void Controller::controller_get_battery(){
std::string name, description,image_filename;
int model_number;double cost, weight_1, max_energy,power_available;

std::cout<<view.get_battery();
std::cin>>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename>>weight_1;
Battery battery_1(power_available,max_energy,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Battery(power_available,max_energy,name,model_number,cost,description,image_filename));
battery_1.set_weight(weight_1);battery=battery_1;
shop.create_new_robot_part(battery_1);
}

void Controller::controller_get_head(){
std::string name, description,image_filename;
int model_number;double cost, weight_1, power;

std::cout<<view.get_head();
std::cin>>power>>name>>model_number>>cost>>description>>image_filename>>weight_1;
Head head_1(power,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Head(power,name,model_number,cost,description,image_filename));
head_1.set_weight(weight_1); head = head_1;
shop.create_new_robot_part(head_1);
}

void Controller::controller_get_locomotor(){
std::string name, description,image_filename;
int model_number;double cost, weight_1, max_power;

std::cout<<view.get_locomotor();
std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename>>weight_1;
Locomotor locomotor_1(max_power,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Locomotor(max_power,name,model_number,cost,description,image_filename));
locomotor_1.set_weight(weight_1);locomotor=locomotor_1;
shop.create_new_robot_part(locomotor_1);
}

void Controller::controller_get_torso(){
std::string name, description,image_filename;
int model_number, battery_compartments, max_arms;double weight_1, cost;

std::cout<<view.get_torso();
std::cin>>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename>>weight_1;
Torso torso_1(battery_compartments,max_arms,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Torso(battery_compartments,max_arms,name,model_number,cost,description,image_filename));
torso_1.set_weight(weight_1);torso=torso_1;
shop.create_new_robot_part(torso_1);
}

void Controller::controller_get_customer(){
std::string name,phone_number,email_address;
int number;

std::cout<<view.get_customer();
std::cin>>name>>number>>phone_number>>email_address;
Customer customer_1(name,number,phone_number,email_address);
//shop.create_new_customer(Customer(name,number,phone_number,email_address));
customer=customer_1;
shop.create_new_customer(customer_1);
}

void Controller::controller_get_sales_associate(){
std::string name;
int employee_number;

std::cout<<view.get_sales_associate();
std::cin>>name>>employee_number;
Sales_associate sales_associate_1(name,employee_number);
//shop.create_new_sales_associate(Sales_associate(name,employee_number));
sales_associate=sales_associate_1;
shop.create_new_sales_associate(sales_associate_1);
}

void Controller::controller_get_robot_model(){
int model_num_1;
std::cout<<view.get_model();std::cin>>model_num_1;
Robot_model robot_model_1(arm,battery,head,locomotor,torso,model_num_1);
//shop.create_new_robot_model(Robot_model(arm,battery,head,locomotor,torso));
robot_model=robot_model_1;
shop.create_new_robot_model(robot_model_1);
//shop.list_models();
}

void Controller::controller_get_order(){
int order_number=1, quantity, model_num, status=0;
std::string date="Today";

std::cout<<view.get_order();
std::cin>>model_num>>quantity;
shop.create_new_order(Order(date,customer,sales_associate,shop.find_model(model_num),status,order_number));
}

void Controller::cli(){
int cmd=-1;
while(cmd!=0){
std::cout <<view.get_menu()<<std::endl;
std::cout <<"Entered: ";
std::cin>>cmd;
//cin.ignore();
execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd){

if(cmd==1){
/*Controller::controller_get_battery();
Controller::controller_get_head();
Controller::controller_get_locomotor();
Controller::controller_get_torso();
Controller::controller_get_robot_model();*/
}
if(cmd==2){
shop.list_models();
}

if(cmd==3){
//shop.create_new_customer(customer);
Controller::controller_get_customer();
}

if(cmd==4){
//shop.create_new_sales_associate(sales_associate);
Controller::controller_get_sales_associate();
}

if(cmd==5){
//Controller::controller_get_order();
Controller::controller_get_customer();
Controller::controller_get_sales_associate();
Controller::controller_get_robot_model();
Controller::controller_get_order();
}
}
