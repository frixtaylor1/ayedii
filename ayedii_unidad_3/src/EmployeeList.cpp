#include "../include/EmployeeList.hpp"

EmployeeList::EmployeeList(void) {}

EmployeeList::~EmployeeList() {}

void EmployeeList::listEmployees() {
    for (auto &&it : employees)
    {
        it->showEmployeeInformation();  
    }
}

void EmployeeList::addEmployee(IEmployee* employee) {
    employees.push_back(employee);
}

void EmployeeList::totalPerDepartment() {    
    for (auto &&i : employees)
    {
        i->getAmountPerDepartment();
    }
}