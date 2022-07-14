#pragma once
#include "./common.hpp"
#include "./IEmployee.hpp"

interface IEmployeeList {
    virtual void listEmployees() = 0;
    virtual void totalPerDepartment() = 0;
    virtual void addEmployee(IEmployee* employee) = 0;
};