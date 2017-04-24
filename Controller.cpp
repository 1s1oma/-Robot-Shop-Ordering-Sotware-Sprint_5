#include "Controller.h"

int battery_compartments, max_arms=1;

void Controller::controller_get_arm(){
std::string name;
int model_number; double cost, max_power;
const char* str_name; const char* str_name_1; const char* str_name_2; const char* str_name_3;
const char* description_1; const char* image_filename_1;

fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Arm specifications");
//std::cout<<view.get_arm();
if (max_arms == 1) {
	//std::cin >> max_power >> name >> model_number >> cost >> description >> image_filename;
	str_name_3 = fl_input(" Max Power?", "");
	max_power = atof(str_name_3); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("An Arm part created");
	Arm arm(max_power, name, model_number, cost, description, image_filename);
	arm_1 = arm;
	shop.create_new_robot_part(arm_1);
}
else if (max_arms == 2) {
	//std::cin >> max_power >> name >> model_number >> cost >> description >> image_filename;
	str_name_3 = fl_input(" Max Power?", "");
	max_power = atof(str_name_3); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("An Arm part created");
	Arm arm(max_power, name, model_number, cost, description, image_filename);
	arm_1 = arm;
	shop.create_new_robot_part(arm_1);

	fl_message("Enter second Arm specifications");
//	std::cout << std::endl<<"Enter second Arm" << std::endl;
	//std::cin >> max_power >> name >> model_number >> cost >> description >> image_filename
	str_name_3 = fl_input(" Max Power?", "");
	max_power = atof(str_name_3); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name_1(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description_2(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename_2(image_filename_1); Fl::check();

	fl_message("An Arm part created");
	Arm arm_o(max_power, name, model_number, cost, description_2, image_filename_2);
	arm_2 = arm_o;
	shop.create_new_robot_part(arm_2);
}
}

void Controller::controller_get_battery(){
std::string name;
int model_number, max_energy;double cost,power_available;
const char* str_name; const char* str_name_1; const char* str_name_2; const char* str_name_3; const char* str_name_4;
const char* description_1; const char* image_filename_1;

fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Battery specifications");
//std::cout<<view.get_battery();

if (battery_compartments == 1) {
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_1 = battery;
}
else if (battery_compartments == 2) {
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_1 = battery;
	shop.create_new_robot_part(battery_1);

	//std::cout << std::endl<<"Enter second Battery" << std::endl;
	fl_message("Enter second Battery specifications");
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name_1(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description_2(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename_3(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery_o(power_available, max_energy, name_1, model_number, cost, description_2, image_filename_3);
	battery_2 = battery_o;
	shop.create_new_robot_part(battery_2);
}

else if (battery_compartments == 3) {
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_1 = battery;
	shop.create_new_robot_part(battery_1);

	//std::cout << std::endl<<"Enter second Battery" << std::endl;
	fl_message("Enter second Battery specifications");
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name_1(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description_2(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename_2(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery_o(power_available, max_energy, name_1, model_number, cost, description_2, image_filename_2);
	battery_2 = battery_o;
	shop.create_new_robot_part(battery_2);
	
	fl_message("Enter third Battery specifications");
	str_name_3 = fl_input(" Power available?", "");
	power_available = atof(str_name_3); Fl::check();

	str_name_4 = fl_input(" Max energy?", "");
	max_energy = atoi(str_name_4); Fl::check();

	str_name = fl_input(" Part Name?", "");
	std::string name_2(str_name); Fl::check();

	str_name_1 = fl_input(" Part model no?", "");
	model_number = atoi(str_name_1); Fl::check();

	str_name_2 = fl_input(" Part Cost?", "");
	cost = atof(str_name_2); Fl::check();

	description_1 = fl_input(" Part Description?", "");
	std::string description_3(description_1); Fl::check();

	image_filename_1 = fl_input(" Part Filename?", "");
	std::string image_filename_3(image_filename_1); Fl::check();

	fl_message("A Battery part created");
	//std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery_1_o(power_available, max_energy, name_2, model_number, cost, description_3, image_filename_3);
	battery_3 = battery_1_o;
	shop.create_new_robot_part(battery_3);

	/*std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_1 = battery;
	shop.create_new_robot_part(battery_1);

	std::cout << std::endl<<"Enter second Battery" << std::endl;
	std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery_o(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_2 = battery_o;
	shop.create_new_robot_part(battery_2);

	std::cout << std::endl<<"Enter third Battery" << std::endl;
	std::cin >> power_available >> max_energy >> name >> model_number >> cost >> description >> image_filename;
	Battery battery_1_o(power_available, max_energy, name, model_number, cost, description, image_filename);
	battery_3 = battery_1_o;
	shop.create_new_robot_part(battery_3);*/
}
}

void Controller::controller_get_head(){
//std::string name; 
int model_number;double cost, power;

const char* str_name; const char* str_name_1; const char* str_name_2; const char* str_name_4;
const char* description_1; const char* image_filename_1;
fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Head specifications");


str_name_4 = fl_input(" Power?", "");
power = atof(str_name_4); Fl::check();

str_name = fl_input(" Part Name?", "");
std::string name(str_name); Fl::check();

str_name_1 = fl_input(" Part model no?", "");
model_number = atoi(str_name_1); Fl::check();

str_name_2 = fl_input(" Part Cost?", "");
cost = atof(str_name_2); Fl::check();

description_1 = fl_input(" Part Description?", "");
std::string description(description_1); Fl::check();

image_filename_1 = fl_input(" Part Filename?", "");
std::string image_filename(image_filename_1); Fl::check();

fl_message("A Head part created");

//std::cout<<view.get_head();
//std::cin>>power>>name>>model_number>>cost>>description>>image_filename;
Head head_1(power,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Head(power,name,model_number,cost,description,image_filename));
//head_1.set_weight(weight_1); 
head = head_1;
shop.create_new_robot_part(head_1);
}

void Controller::controller_get_locomotor(){
//std::string name;
int model_number;double cost,max_power;

const char* str_name; const char* str_name_1; const char* str_name_2; const char* str_name_4;
const char* description_1; const char* image_filename_1;
fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Locomotor specifications");

str_name_4 = fl_input(" Max power?", "");
max_power = atof(str_name_4); Fl::check();

str_name = fl_input(" Part Name?", "");
std::string name(str_name); Fl::check();

str_name_1 = fl_input(" Part model no?", "");
model_number = atoi(str_name_1); Fl::check();

str_name_2 = fl_input(" Part Cost?", "");
cost = atof(str_name_2); Fl::check();

description_1 = fl_input(" Part Description?", "");
std::string description(description_1); Fl::check();

image_filename_1 = fl_input(" Part Filename?", "");
std::string image_filename(image_filename_1); Fl::check();

fl_message("A Locomotor part created");

//std::cout<<view.get_locomotor();
//std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename;
Locomotor locomotor_1(max_power,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Locomotor(max_power,name,model_number,cost,description,image_filename));
//locomotor_1.set_weight(weight_1);
locomotor=locomotor_1;
shop.create_new_robot_part(locomotor_1);
}

void Controller::controller_get_torso(){
//std::string name,
int model_number; double cost;

const char* str_name; const char* str_name_1; const char* str_name_2; const char* str_name_3; const char* str_name_4;
const char* description_1; const char* image_filename_1;
fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Torso specifications");

str_name_3 = fl_input(" No of Battery Compartments", "");
battery_compartments = atoi(str_name_3); Fl::check();

str_name_4 = fl_input(" No of Arms?", "");
max_arms = atoi(str_name_4); Fl::check();

str_name = fl_input(" Part Name?", "");
std::string name(str_name); Fl::check();

str_name_1 = fl_input(" Part model no?", "");
model_number = atoi(str_name_1); Fl::check();

str_name_2 = fl_input(" Part Cost?", "");
cost = atof(str_name_2); Fl::check();

description_1 = fl_input(" Part Description?", "");
std::string description(description_1); Fl::check();

image_filename_1 = fl_input(" Part Filename?", "");
std::string image_filename(image_filename_1); Fl::check();

fl_message("A Torso part created");

//std::cout<<view.get_torso();
//std::cin>>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
Torso torso_1(battery_compartments,max_arms,name,model_number,cost,description,image_filename);
//shop.create_new_robot_part(Torso(battery_compartments,max_arms,name,model_number,cost,description,image_filename));
//torso_1.set_weight(weight_1);
torso=torso_1;
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
//std::cout<<view.get_model();std::cin>>model_num_1;
const char* str_2;
fl_message_title("Shola Robot Shop Inc"); fl_message("Enter Robot Model specifications");

str_2 = fl_input(" Robot Model No.?", "");
model_num_1 = atoi(str_2); Fl::check();

if (max_arms == 1 && battery_compartments == 1) {
	Robot_model robot_model_1(arm_1, battery_1, head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
else if (max_arms == 1 && battery_compartments == 2) {
	Robot_model robot_model_1(arm_1, battery_1, battery_2, battery_3, head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
else if (max_arms == 1 && battery_compartments == 3) {
	Robot_model robot_model_1(arm_1, battery_1, battery_2, battery_3,head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
else if (max_arms == 2 && battery_compartments == 1) {
	Robot_model robot_model_1(arm_1, arm_2, battery_1, head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
else if (max_arms == 2 && battery_compartments == 2) {
	Robot_model robot_model_1(arm_1, arm_2, battery_1, battery_2, head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
else if (max_arms == 2 && battery_compartments == 3) {
	Robot_model robot_model_1(arm_1, arm_2, battery_1, battery_2, battery_3, head, locomotor, torso, model_num_1);
	robot_model = robot_model_1;
	robot_model_1.set_arm_no(max_arms); robot_model_1.set_battery_no(battery_compartments);
	shop.create_new_robot_model(robot_model_1);
}
}

void Controller::controller_get_order(){
int order_number=1, quantity, model_num, status=0;
std::string date="Today";

std::cout<<view.get_order();
std::cin>>model_num>>quantity;
shop.create_new_order(Order(date,customer,sales_associate,shop.find_model(model_num),status,order_number));
}

void Controller::cli(){
	int cmd = -1; std::string menu; const char* str_1;
while(cmd!=0){
	menu = view.get_menu(); fl_message_title("Shola Robot Shop Inc"); fl_message_icon()->label("SH"); str_1 = fl_input(menu.c_str(), "");
	//str_name = fl_input(" Max Power?", "");
	cmd = atoi(str_1); Fl::check();
//std::cout <<view.get_menu()<<std::endl;
//std::cout <<"Entered: ";
//std::cin>>cmd;
//cin.ignore();
execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd){

if(cmd==1){
Controller::controller_get_torso();
Controller::controller_get_arm();
Controller::controller_get_battery(); shop.create_new_robot_part(head); shop.create_new_robot_part(locomotor);
//Controller::controller_get_head();
//Controller::controller_get_locomotor();
Controller::controller_get_robot_model();
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
