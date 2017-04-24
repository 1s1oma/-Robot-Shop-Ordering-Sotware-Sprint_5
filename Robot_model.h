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
   Robot_model(Arm arm_o, Battery battery_o_1,Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num):
   arm1(arm_o), battery1(battery_o_1), head(head_o), locomotor(locomotor_o),torso(torso_o), robot_model_num(model_num){}
   Robot_model(Arm arm_o,  Battery battery_o_1, Battery battery_o_2, Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num) :
	   arm1(arm_o), battery1(battery_o_1), battery2(battery_o_2), head(head_o), locomotor(locomotor_o), torso(torso_o), robot_model_num(model_num) {}
   Robot_model(Arm arm_o, Battery battery_o_1, Battery battery_o_2, Battery battery_o_3, Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num) :
	   arm1(arm_o), battery1(battery_o_1), battery2(battery_o_2), battery3(battery_o_3), head(head_o), locomotor(locomotor_o), torso(torso_o), robot_model_num(model_num) {}

   Robot_model(Arm arm_o, Arm arm_o_1, Battery battery_o_1, Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num) :
	   arm1(arm_o), arm2(arm_o_1),battery1(battery_o_1), head(head_o), locomotor(locomotor_o), torso(torso_o), robot_model_num(model_num) {}
   Robot_model(Arm arm_o, Arm arm_o_1, Battery battery_o_1, Battery battery_o_2, Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num) :
	   arm1(arm_o), arm2(arm_o_1), battery1(battery_o_1), battery2(battery_o_2), head(head_o), locomotor(locomotor_o), torso(torso_o), robot_model_num(model_num) {}
   Robot_model(Arm arm_o, Arm arm_o_1, Battery battery_o_1, Battery battery_o_2, Battery battery_o_3, Head head_o, Locomotor locomotor_o, Torso torso_o, int model_num) :
	   arm1(arm_o), arm2(arm_o_1), battery1(battery_o_1), battery2(battery_o_2), battery3(battery_o_3), head(head_o), locomotor(locomotor_o), torso(torso_o), robot_model_num(model_num) {}

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
   void set_arm_no(int arm_val);
   void set_battery_no(int battery_val);
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
int arm_no, battery_no;
Arm arm1, arm2;
Battery battery1, battery2, battery3;
Torso torso;
Head head;
Locomotor locomotor;
};



#endif // ROBOT_MODEL_H_INCLUDEDs
