#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "Shop.h"
#include "View.h"

class Controller{
public:
//Controller(Shop& shop_o, View& view_o) : shop(shop_o),view(view_o){}
Controller(Robot_model model, Arm arm_o, Battery battery_o, Head head_o, Locomotor locomotor_o, Torso torso_o, Shop& shop_o, View& view):
robot_model(model), arm(arm_o), battery (battery_o), head(head_o), locomotor(locomotor_o), torso(torso_o), shop(shop_o), view(view){}

void cli();
void execute_cmd(int cmd);
void controller_get_arm();
void controller_get_head();
void controller_get_locomotor();
void controller_get_battery();
void controller_get_torso();
void controller_get_customer();
void controller_get_sales_associate();
void controller_get_robot_model();
void controller_get_order();

private:
Shop& shop;
View& view;
Robot_model robot_model;
Arm arm;
Battery battery;
Head head;
Locomotor locomotor;
Torso torso;
Customer customer;
Sales_associate sales_associate;
};

#endif // CONTROLLER_H_INCLUDED