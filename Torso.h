#ifndef TORSO_H_INCLUDED
#define TORSO_H_INCLUDED

 #include "Robot_part.h"
class Torso : public Robot_part{
public:
   Torso(int torso_battery_compartments, int torso_max_arms, std::string part_name, int part_model_number, double part_cost, std::string part_description, std::string part_image_filename):
        Robot_part(part_name, part_model_number, part_cost, part_description, part_image_filename), battery_compartments(torso_battery_compartments), max_arms(torso_max_arms) {}
    Torso():Torso(0,0,"0",0,0.0,"0","0"){}
    Torso(std::istream& ist){
    ist >>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
    }
    ~Torso(){}
    int get_battery_compartments() const;
    int get_max_arms() const;
    void get_parts();
    void view_parts();
    void set_weight(double part_weight);
    double get_weight();
     double get_cost() override;
    void save(std::ostream& ost);
    void load(std::istream& ist);
    private:
    int battery_compartments;
    int max_arms;
    double weight;
};

#endif // TORSO_H_INCLUDED
