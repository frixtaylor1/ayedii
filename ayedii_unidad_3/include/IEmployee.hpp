#pragma once 
#include "./common.hpp"

interface IEmployee {
    virtual void showEmployeeInformation() = 0;
    virtual void getAmountPerDepartment() = 0;
};
