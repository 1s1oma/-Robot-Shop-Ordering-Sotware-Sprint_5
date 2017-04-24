#include "View.h"

std::string View::get_menu(){
std::string menu= R"(
===============================
WELCOME TO SHOLA ROBOT INC SHOP
===============================

PM, To create Robot Model Press(1)
BC, To Browse Robot Models Press(2)
PB, To create Beloved Customer Press(3)
PB, To create Sales Associate Press(4)
SA, To create Robot Order Press(5)
PB, To save Orders Press(6)
)";
return menu;
}

std::string View::get_arm(){
std::string arm = R"(
Enter Arm specifications
1. Max power 2. Part name 3. Model number 4. Cost 5. Description 6. Image filename 7. Weight
)";
return arm;
}

std::string View::get_battery(){
std::string battery = R"(
Enter Battery specifications
1. Power available 2. Max energy 3. part name 4. Model number 5. Cost 6. Description 7. Image filename 8. Weight
)";
return battery;
}

std::string View::get_head(){
std::string head = R"(
Enter Head specifications
Enter 1. Power  2. Part name 3. Model number 4. Cost 5. Description 6. Image filename 7. Weight
)";
return head;
}

std::string View::get_locomotor(){
std::string locomotor = R"(
Enter Locomotor specifications
Enter 1. Max power 2. Part name 3. Model number 4. Cost 5. Description 6. Image filename 7. Weight
)";
return locomotor;
}

std::string View::get_torso(){
std::string torso= R"(
Enter Torso specifications
Enter 1. No. of battery compartments 2. Max no of arms 3. Part name 4. Model number 5. Cost 6. Description 7. Image filename 8.Weight
)";
return torso;
}

std::string View::get_customer(){
std::string beloved_customer=R"(
Enter 1. Customer name 2. Customer ID Number 3. Phone Number 4. Email address
)";
return beloved_customer;
}

std::string View::get_sales_associate(){
std::string associate=R"(
Enter 1. Name 2. Employee number 3. Weight
)";
return associate;
}

std::string View::get_order(){
std::string order=R"(
Enter 1. Robot model Number 2. Quantity
)";
return order;
}

std::string View::get_model(){
std::string model=R"(
Enter 1. Robot model Number
)";
return model;
}
