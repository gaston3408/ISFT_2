#include <iostream>
#include "../enums/Area.hpp"
using namespace std;

string getAreaName(Area area){
    switch (area)
    {
        case Marketing:
            return "Marketing";
            break;
        case Production:
            return "Production";
            break;
        case Sales:
            return "Sales";
            break;
        default:
            return "";
            break;
    }
}
