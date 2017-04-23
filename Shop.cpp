#include "Shop.h"

/*void Shop::create_new_robot_part(){
robot_parts.name="robo"; robot_parts.model_number=15;robot_parts.cost=250.0;robot_parts.description<<"top notch";robot_parts.image_filename="na";
cout<<robot_parts.name<<robot_parts.model_number<<robot_parts.cost<<robot_parts.description<<robot_parts.image_filename<<endl;
}*/

void Shop::create_new_robot_part(Robot_part &robot_part_o){
	robot_parts.emplace_back(&robot_part_o);
	robot_parts[0]->view_parts();
}

void Shop::create_new_robot_model(Robot_model robot_model_o){
models.push_back(robot_model_o);
}

void Shop::create_new_customer(Customer customer_o){
customers.push_back(customer_o);
 /*for(int i=0; i<customers.size();i++){
 std::cout<< customers[i].Customer::to_string();
  }*/
}

void Shop::create_new_sales_associate(Sales_associate sales_associate_o){
sales_associates.push_back(sales_associate_o);
 for(int i=0; i<sales_associates.size();i++){
 std::cout<< sales_associates[i].Sales_associate::to_string();
  }
}

void Shop::create_new_order(Order order_o){
orders.push_back(order_o);
for(int i=0; i<orders.size();i++){
  orders[i].Order::to_string();
  }
}


int Shop::number_of_robot_parts(){
return robot_parts.size();
}

int Shop::number_of_robot_models(){
return models.size();
}

int Shop::number_of_customers(){
return customers.size();
}

int Shop::number_of_sales_associates(){
return sales_associates.size();
}

int Shop::number_of_orders(){
return orders.size();
}

void Shop::list_models(){
int num;
  for(int i=0; i<models.size();i++){
  std::cout<<"Robot Model ("<<models[i].get_model_num()<<")"<<std::endl;
  }

  std::cout <<"Enter model number to view parts"<<std::endl; std::cin >> num;
  for(int i=0; i<models.size();i++){
  if(num==models[i].get_model_num())
  models[i].get_parts();
  }
}
Robot_model Shop::find_model(int num_1){

for(int i=0; i<models.size();i++){
  if(num_1==models[i].get_model_num())
  return models[i];
  }
}

void Shop::shop_to_string(int index){
//string shop = robot_parts[index].to_string();
robot_parts[index]->view_parts();
models[index].get_parts();
std::cout << customers[index].to_string()<<std::endl
<< sales_associates[index].to_string()<<std::endl;
orders[index].to_string();
//return shop;
}

void Shop::save(std::string filename){
std::ofstream ofs{filename, std::ios_base::out};

for(int i=0;i<models.size();i++){
models[i].save(ofs);
}
for(int i=0;i<robot_parts.size();i++){
robot_parts[i]->save(ofs);
}

for(int i=0;i<customers.size();i++){
customers[i].save(ofs);
}
for(int i=0;i<sales_associates.size();i++){
sales_associates[i].save(ofs);
}
for(int i=0;i<orders.size();i++){
orders[i].save(ofs);
}
}

void Shop::open(std::string filename) {
	std::ifstream ifs{ filename, std::ios_base::in };
	std::string label;
	while (!ifs.eof()) {
		std::getline(ifs, label);
		if (label == "Arm") {
			 arm.load(ifs);
			robot_parts.emplace_back(&arm);
		}
		else if(label=="Battery"){
			battery.load(ifs);
			robot_parts.emplace_back(&battery);
			}
		else if (label == "Head") {
			head.load(ifs);
			robot_parts.emplace_back(&head);
		}
		else if (label == "Locomotor") {
			locomotor.load(ifs);
			robot_parts.emplace_back(&locomotor);
		}
		else if (label == "Torso") {
			torso.load(ifs);
			robot_parts.emplace_back(&torso);
		}
		else if (label == "Robot_Model") {
			robot_model.load(ifs);
			models.push_back(robot_model);
		}
		else if (label == "Sales_associate") {
			sales_associate_1.load(ifs);
			sales_associates.push_back(sales_associate_1);
		}
		else if (label == "Customer") {
			customer_1.load(ifs);
			customers.push_back(customer_1);
		}
		else if (label == "Order") {
			order_1.load(ifs);
			orders.push_back(order_1);
		}
	}
	/*robot_parts[4]->view_parts();
	robot_parts[3]->view_parts();
	robot_parts[2]->view_parts();
	robot_parts[1]->view_parts();
	robot_parts[0]->view_parts();*/
}


