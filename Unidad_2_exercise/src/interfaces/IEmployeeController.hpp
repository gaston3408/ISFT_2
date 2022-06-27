#ifndef IEMPLOYEE_CONTROLLER
#define IEMPLOYEE_CONTROLLER

#include "../enums/Area.hpp"
#include "IEmployee.hpp"
#include <iostream>
using namespace std;

class IEmployeeController
{
public:

    virtual IEmployee* create(string name, string lastName, int dni, Area area) = 0;
    virtual void append(IEmployee* employee) = 0;
    virtual void getCount() = 0;
    virtual void getByArea(Area area) = 0;
    virtual void deleteEmployees() = 0;
};

#endif
