#ifndef IEMPLOYEE
#define IEMPLOYEE
#include <iostream>
using namespace std;

class IEmployee
{
public:
    virtual string getName() = 0;
    virtual void setName(string namme) = 0;
    virtual string getLastName() = 0;
    virtual void setLastName(string lastName) = 0;
    virtual int getDni() = 0;
    virtual void setDni(int dni) = 0;
    virtual Area getArea() = 0;
    virtual void setArea(Area area) = 0;
};

#endif
