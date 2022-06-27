#ifndef EMPLOYEE
#define EMPLOYEE
#include "../enums/Area.hpp"
#include "../interfaces/IEmployee.hpp"
#include <iostream>
using namespace std;

class Employee: public IEmployee
{
private:
    string name;
    string lastName;
    int dni;
    Area area;
public:
    Employee(){};
    ~Employee(){};

    string getName(){
        return this->name;
    };
    void setName(string namme){
        this->name = name;
    };
    string getLastName(){
        return this->lastName;
    };
    void setLastName(string lastName){
        this->lastName = lastName;
    };
    int getDni(){
        return this->dni;
    };
    void setDni(int dni){
        this->dni = dni;
    };
    Area getArea(){
        return this->area;
    };
    void setArea(Area area){
        this->area = area;
    };
};

#endif
