#include <Windows.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include "Robot_part.h"
#include "Arm.h"
#include "Battery.h"
#include "Torso.h"
#include "Locomotor.h"
#include "Head.h"
#include "Robot_model.h"
#include "Customer.h"
#include "Sales_associate.h"
#include "Order.h"
#include "Shop.h"
#include "Controller.h"
#include <iostream>

/*ostream& operator<<(ostream& os, const Robot_part& robot){
os << '('<<robot.get_name()<<','<<robot.get_model_number()<<','<<robot.get_cost()<<','<<robot.get_description()<<','<<robot.get_image_filename()<<')';
return os;
}*/

int main (){
int num=0; //std::string message = "Arm part created";

Robot_part robot_part_o;//Battery battery_o; Head head_o; Locomotor locomotor_o; Torso torso_o;Customer customer_o;Sales_associate sales_associate_o;
//Robot_model robot_model_o(arm_o, battery_o,head_o,locomotor_o,torso_o, num);
Arm arm_o (32,"arm part", 2, 45.50, "arm part created", "no file name");
fl_message("Arm part created, Press Ok to create a new part");

const char* str_name; const char* str_name_1;const char* str_name_2;const char* str_name_3;int model_number; double cost; const char* description_1; const char* image_filename_1;

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();


	str_name_1 = fl_input(" Part model no?", "");
	model_number=atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
   cost = atoi(str_name_2); Fl::check();


	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("A robot part created");

//Shop shop;
//shop.save("File_1");
//shop.open("File");
//Robot_model robot_model_o(arm_o, battery_o,head_o,locomotor_o,torso_o, num);
//Robot_model robot_model_o(arm_o, battery_o,head_o,locomotor_o,torso_o, num);
//Order order_o("0",customer_o,sales_associate_o, robot_model_o,0,0);
/*
arm_o.set_weight(1.0);
battery_o.set_weight(1);
head_o.set_weight(1);
locomotor_o.set_weight(1);
torso_o.set_weight(1);
//

Shop shop;
View view{shop};

Controller controller(robot_model_o,arm_o, battery_o,head_o,locomotor_o,torso_o,shop, view);
controller.cli();
*/
	return (Fl::run());
}
