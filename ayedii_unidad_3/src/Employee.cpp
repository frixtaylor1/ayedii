#include "../include/Employee.hpp"

MarketingEmployee::MarketingEmployee(void) : department("marketing") {}

MarketingEmployee::MarketingEmployee(std::string name, int age)
    : name(name), age(age), department("marketing") {
    numberOfEmployee++;
}

MarketingEmployee::~MarketingEmployee() {}

void MarketingEmployee::obtainEmployeeInformation(std::string& name, int& age, std::string& department) {
    name        = this->name;
    age         = this->age;
    department  = this->department;
}

int MarketingEmployee::numberOfEmployee = 0;

std::ostream& operator<<(std::ostream& stream, MarketingEmployee mkEmployee)
{
    std::string department, name;
    int age;
    mkEmployee.obtainEmployeeInformation(name, age, department);
    stream << "nombre: " << name << "\nage: " << age << "\ndepartment: " << department << std::endl;
    return stream;
}

void MarketingEmployee::showEmployeeInformation()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this;
    std::cout << "-------------------------------------------\n";
}

void MarketingEmployee::getAmountPerDepartment()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this << "number of employee: " << numberOfEmployee << std::endl;
    std::cout << "-------------------------------------------\n";
}
//
/* --------------------------------------------------------------------------- */
//
SalesEmployee::SalesEmployee(void) : department("Sales") {}

SalesEmployee::SalesEmployee(std::string name, int age)
    : name(name), age(age), department("sales") {
    numberOfEmployee++;
}

SalesEmployee::~SalesEmployee() {}

void SalesEmployee::obtainEmployeeInformation(std::string& name, int& age, std::string& department) {
    name        = this->name;
    age         = this->age;
    department  = this->department;
}

int SalesEmployee::numberOfEmployee = 0;

std::ostream& operator<<(std::ostream& stream, SalesEmployee sEmployee)
{
    std::string department, name;
    int age;
    sEmployee.obtainEmployeeInformation(name, age, department);
    stream << "nombre: " << name << "\nage: " << age << "\ndepartment: " << department << std::endl;
    return stream;
}

void SalesEmployee::showEmployeeInformation()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this;
    std::cout << "-------------------------------------------\n";
}

void SalesEmployee::getAmountPerDepartment()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this << "number of Employee: " << numberOfEmployee << std::endl;
    std::cout << "-------------------------------------------\n";
}

//
/* --------------------------------------------------------------------------- */
//
ProductionEmployee::ProductionEmployee(void) : department("Production") {}

ProductionEmployee::ProductionEmployee(std::string name, int age)
    : name(name), age(age), department("production") {
    numberOfEmployee++;
}

ProductionEmployee::~ProductionEmployee() {}

void ProductionEmployee::obtainEmployeeInformation(std::string& name, int& age, std::string& department) {
    name        = this->name;
    age         = this->age;
    department  = this->department;
}

int ProductionEmployee::numberOfEmployee = 0;

std::ostream& operator<<(std::ostream& stream, ProductionEmployee pEmployee)
{
    std::string department, name;
    int age;
    pEmployee.obtainEmployeeInformation(name, age, department);
    stream << "nombre: " << name << "\nage: " << age << "\ndepartment: " << department << std::endl;
    return stream;
}

void ProductionEmployee::showEmployeeInformation()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this;
    std::cout << "-------------------------------------------\n";
}

void ProductionEmployee::getAmountPerDepartment()
{
    std::cout << "-------------------------------------------\n";
    std::cout << *this << "number of Employee: " << numberOfEmployee << std::endl;
    std::cout << "-------------------------------------------\n";
}