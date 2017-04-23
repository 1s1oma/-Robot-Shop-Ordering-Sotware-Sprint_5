#ifndef VIEW_H_INCLUDED

#include "Shop.h"
#include <string>

class View{
    public:
    View(Shop& shop_o) : shop(shop_o) {}
    std::string get_menu();
    std::string get_arm();
    std::string get_battery();
    std::string get_head();
    std::string get_locomotor();
    std::string get_torso();
    std::string get_customer();
    std::string get_sales_associate();
    std::string get_order();
    std::string get_model();
    private:
    Shop& shop;
};

#endif // VIEW_H_INCLUDED
