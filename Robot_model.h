#ifndef ROBOT_MODEL_H_INCLUDED
#define ROBOT_MODEL_H_INCLUDED

#include "Arm.h"
#include "Battery.h"
#include "Torso.h"
#include "Locomotor.h"
#include "Head.h"

#include <iostream>

class Robot_model{
public:
   Robot_model(Arm arm_o, Battery battery_o,Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num):
   arm(arm_o), battery(battery_o), head(head_o), locomotor(locomotor_o),torso(torso_o), robot_model_num(model_num){}
Robot_model(){}
 ~Robot_model(){}
   double cost();
   double max_speed();
   double max_battery_life();
   void get_parts();
   int get_model_num();
   void save(std::ostream& ost);
   void load(std::istream& ist);
   double get_total_weight();
   double get_total_cost();
   void parts_power();
   void get_battery_life();
   void set_max_speed();
   /*void get_model_arm();
   void get_model_battery();
   void get_model_torso();
   void get_model_head();
   void get_model_locomotor();
   */
private:
int robot_model_num;
double total_weight;
double cost_of_parts;
bool power_limited;
double battery_life;
double model_max_speed;
Arm arm;
Battery battery;
Torso torso;
Head head;
Locomotor locomotor;
};



#endif // ROBOT_MODEL_H_INCLUDEDs
