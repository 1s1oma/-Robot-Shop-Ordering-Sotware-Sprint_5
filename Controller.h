#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED
#include <Windows.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include "Shop.h"
#include "View.h"

class Controller{
public:
//Controller(Shop& shop_o, View& view_o) : shop(shop_o),view(view_o){}
Controller(Robot_model model, Arm arm_o, Battery battery_o, Head head_o, Locomotor locomotor_o, Torso torso_o, Shop& shop_o, View& view):
robot_model(model), arm_1(arm_o), battery_1 (battery_o), head(head_o), locomotor(locomotor_o), torso(torso_o), shop(shop_o), view(view){}

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
Arm arm_1, arm_2;
Battery battery_1, battery_2, battery_3;
Head head;
Locomotor locomotor;
Torso torso;
Customer customer;
Sales_associate sales_associate;
};

#endif // CONTROLLER_H_INCLUDED
