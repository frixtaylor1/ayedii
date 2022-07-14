/* 
* 1. Desarrollar una aplicación en C++ que permita almacenar la Nomina (listado) de los 
*    Empleados y sus datos, además que permita saber el Total x Área a la que pertenece el 
*    Empleado (teniendo 3 áreas, Ventas, Marketing y Producción).
*   
* Deberá:
*   1.1 Escribir le Test
*   1.2 Crear el Código
*   1.3 Verificar que pase el Test.
*   1.4 Refactorizar
*   
*   Deberá presentar el diagrama de Clases, el Código Final y Los test escritos 
*/
//
//
#include <iostream>
//
#include "./include/Employee.hpp"
#include "./include/EmployeeList.hpp"

int main()
{
    IEmployeeList* listOfEmployees = new EmployeeList();

    IEmployee* mkEmployee = new MarketingEmployee("kevin", 24);
    IEmployee* prEmployee = new ProductionEmployee("Marcus", 26);

    listOfEmployees->addEmployee(mkEmployee);
    listOfEmployees->addEmployee(prEmployee);

    listOfEmployees->listEmployees();
    listOfEmployees->totalPerDepartment();

    
    delete prEmployee;
    prEmployee = nullptr;

    delete mkEmployee;
    mkEmployee = nullptr;

    delete listOfEmployees;
    listOfEmployees = nullptr;


    return 0;
}