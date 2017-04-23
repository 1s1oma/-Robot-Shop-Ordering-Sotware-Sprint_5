#ifndef SHOP_H_INCLUDED
#define SHOP_H_INCLUDED
#include "Robot_part.h"
#include "Robot_model.h"
#include "Customer.h"
#include "Sales_associate.h"
#include "Order.h"
#include <vector>
#include <memory>
#include <cassert>

class Shop{
public:
void create_new_robot_part(Robot_part &robot_part_o);
void create_new_robot_model(Robot_model robot_model_o);
void create_new_customer(Customer customer_o);
void create_new_sales_associate(Sales_associate sales_associate_o);
void create_new_order(Order order_o);

int number_of_robot_parts();
int number_of_robot_models();
int number_of_customers();
int number_of_sales_associates();
int number_of_orders();

void shop_to_string (int index);
//void shop_get_parts();
void list_models();
Robot_model find_model(int num_1);
void save(std::string filename);
void open(std::string filename);

private:
std::vector<Robot_model> models;
std::vector<std::unique_ptr<Robot_part>> robot_parts;
std::vector <Customer> customers;
std::vector <Sales_associate> sales_associates;
std::vector <Order> orders;
Arm arm;
Battery battery;
Head head;
Locomotor locomotor;
Torso torso;
Robot_model robot_model;
Customer customer_1;
Sales_associate sales_associate_1;
Order order_1;
};

#endif // SHOP_H_INCLUDED
