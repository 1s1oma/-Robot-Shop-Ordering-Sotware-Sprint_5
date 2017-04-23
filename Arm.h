#ifndef ARM_H_INCLUDED
#define ARM_H_INCLUDED

#include "Robot_part.h"
#include <iostream>
class Arm : public virtual Robot_part{
public:
    Arm(double arm_max_power, std::string part_name, int part_model_number, double part_cost, std::string part_description, std::string part_image_filename):
        Robot_part(part_name, part_model_number, part_cost, part_description, part_image_filename), max_power(arm_max_power){}
    Arm():Arm(0.0,"0",0,0.0,"0","0"){}
    Arm(std::istream& ist){
    ist >>max_power>>name>>model_number>>cost>>description>>image_filename;
    }
    ~Arm(){}
    double get_max_power() const;
    void get_parts() override;
    void view_parts() override;
    void save(std::ostream& ost);
    void load(std::istream& ist);
    void set_weight(double part_weight);
    double get_weight();
    double get_cost() override;
    private:
    double max_power;
    double weight;
};

#endif // ARM_H_INCLUDED
