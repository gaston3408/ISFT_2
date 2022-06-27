#include "../enums/Area.hpp"
#include "../interfaces/IEmployee.hpp"
#include "../models/Employee.hpp"
#include "../interfaces/IEmployeeController.hpp"
#include "../helpers/functions.cpp"
#include <iostream>
#include <vector>

using namespace std;

class EmployeeController: public IEmployeeController
{
    private:
    vector<IEmployee*> employees;

public:
    EmployeeController(){};
    ~EmployeeController(){};

    IEmployee* create(string name, string lastName, int dni, Area area)
    {
        IEmployee* employee = new Employee();
        employee->setName(name);
        employee->setLastName(lastName);
        employee->setDni(dni);
        employee->setArea(area);

        return employee;
    };

    void append(IEmployee* employee){
        this->employees.push_back(employee);
    };

    void getCount(){
        cout << "There are " << employees.size() << " employees." << endl;
    };

    void getByArea(Area area){
        int count = 0;
        for( int i = 0; i < employees.size(); i ++)
        {
            if(employees[i]->getArea() == area){
                count ++;
            }
        }

        cout << "The employees by area " << getAreaName(area) << " are " << count << endl;
    };

    void deleteEmployees()
    {
        for( int i = 0; i < employees.size(); i ++)
        {
            delete employees[i];
        }
    }
};
