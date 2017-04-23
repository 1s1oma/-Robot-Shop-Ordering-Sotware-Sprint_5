#ifndef ROBOT_PART_H_INCLUDED
#define ROBOT_PART_H_INCLUDED

#include <string>
#include <iostream>
#include <fstream>

class Robot_part{
public:
Robot_part(std::string part_name, int part_model_number, double part_cost, std::string part_description, std::string part_image_filename):
    name{part_name}, model_number{part_model_number}, cost{part_cost},description{part_description}, image_filename{part_image_filename} {}
Robot_part(): Robot_part("0",0,0.0,"0","0"){}
~Robot_part(){}

std::string get_name() const;
int get_model_number() const;
double get_cost() const;
std::string get_description() const;
std::string get_image_filename() const;
virtual void get_parts();
virtual void view_parts();
virtual double get_cost();
virtual void save(std::ostream& ost);
virtual void load(std::istream& ist);
//friend ostream& operator<<(ostream& os, const Robot_part& robot);

protected:
std::string name;
int model_number;
double cost;
std::string description;
std::string image_filename;
};

#endif // ROBOT_PART_H_INCLUDED
