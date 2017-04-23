#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include "Robot_part.h"

class Head: public virtual Robot_part{
    public:
    Head (double head_power, std::string  part_name, int part_model_number, double part_cost, std::string  part_description, std::string  part_image_filename):
        Robot_part(part_name, part_model_number, part_cost, part_description, part_image_filename), power(head_power){}
    Head():Head(0.0,"0",0,0.0,"0","0"){}
    Head(std::istream& ist){
    ist >>power>>name>>model_number>>cost>>description>>image_filename;
    }
    ~Head(){}
    double get_power() const;
    void get_parts();
    void view_parts();
    void set_weight(double part_weight);
    double get_weight();
     double get_cost() override;
    void save(std::ostream& ost);
    void load(std::istream& ist);
    private:
    double power;
    double weight;
};


#endif // HEAD_H_INCLUDED
