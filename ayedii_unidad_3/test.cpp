/*
*   Test del programa...
*/
#include <iostream>
#include "./include/Employee.hpp"
#include "./include/EmployeeList.hpp"
int main()
{
    /* test 1 */
    IEmployeeList* listOfEmployees = new EmployeeList();

    IEmployee* mkEmployee = new MarketingEmployee("kevin", 24);

    listOfEmployees->addEmployee(mkEmployee);
    /* end test 1 */

    /* test 2 */
    listOfEmployees->listEmployees();
    /* endof test 2 */

    /* test 3 */
    listOfEmployees->totalPerDepartment();
    /* endof test 3 */


    delete listOfEmployees;
    delete mkEmployee;

    listOfEmployees = nullptr;
    mkEmployee = nullptr;

    EXIT_SUCCESS;
}
