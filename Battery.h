#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Robot_part.h"

class Battery : public virtual Robot_part{
public:
   Battery(double battery_power_available, int battery_max_energy, std::string part_name, int part_model_number, double part_cost, std::string part_description, std::string part_image_filename):
        Robot_part(part_name, part_model_number, part_cost, part_description, part_image_filename), power_available(battery_power_available), max_energy(battery_max_energy) {}
   Battery():Battery(0.0,0,"0",0,0.0,"0","0"){}
   ~Battery(){}
   Battery(std::istream& ist){
    ist >>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename;
    }
    double get_power_available() const;
    double get_max_energy() const;
    void get_parts();
    void view_parts();
    void set_weight(double part_weight);
    double get_weight();
     double get_cost() override;
    void save(std::ostream& ost);
	void load(std::istream& ist);
private:
double power_available;
double max_energy;
double weight;
};


#endif // BATTERY_H_INCLUDED
