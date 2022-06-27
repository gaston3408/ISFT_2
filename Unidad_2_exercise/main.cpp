#include "src/interfaces/IEmployeeController.hpp"
#include "src/controllers/EmployeeController.hpp"
#include "src/interfaces/IEmployee.hpp"
#include "src/enums/Area.hpp"

int main()
{
    IEmployeeController* controller = new EmployeeController();

    IEmployee* pedro = controller->create("Pedro", "Gutierrez", 32546234, Marketing);
    IEmployee* juan = controller->create("Juan", "Fernandez", 31546234, Sales);
    IEmployee* jorge = controller->create("Jorge", "Diaz", 22546234, Production);
    IEmployee* florencia = controller->create("Florencia", "Paz", 12546234, Production);
    IEmployee* carla = controller->create("Carla", "Gomez", 38546234, Sales);

    controller->append(pedro);
    controller->append(juan);
    controller->append(jorge);
    controller->append(florencia);
    controller->append(carla);

    controller->getCount();

    controller->getByArea(Marketing);
    controller->getByArea(Sales);
    controller->getByArea(Production);

    controller->deleteEmployees();

    return 0;
}


