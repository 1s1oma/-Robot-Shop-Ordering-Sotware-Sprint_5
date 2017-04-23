#ifndef LOCOMOTOR_H_INCLUDED
#define LOCOMOTOR_H_INCLUDED

#include "Robot_part.h"

class Locomotor : public virtual Robot_part{
public:
    Locomotor(double locomotor_max_power, std::string part_name, int part_model_number, double part_cost, std::string part_description, std::string part_image_filename):
        Robot_part(part_name, part_model_number, part_cost, part_description, part_image_filename), max_power(locomotor_max_power){}
    Locomotor():Locomotor(0.0,"0",0,0.0,"0","0"){}
    Locomotor(std::istream& ist){
    ist >>max_power>>name>>model_number>>cost>>description>>image_filename;
    }
    ~Locomotor(){}
    double get_max_power() const;
    void get_parts();
    void view_parts();
    void set_weight(double part_weight);
    double get_weight();
     double get_cost() override;
    void set_locomotor_max_speed(double speed);
    double get_locomotor_max_speed();
    void save(std::ostream& ost);
    void load(std::istream& ist);
    private:
    double max_power;
    double weight;
    double locomotor_max_speed;
};

#endif // LOCOMOTOR_H_INCLUDED
