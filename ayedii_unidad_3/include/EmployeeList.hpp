#include "./IEmployeeList.hpp"
#include <list>

class EmployeeList : implement IEmployeeList {
private:
    std::list<IEmployee*> employees;
public:
    EmployeeList();
    ~EmployeeList();
    void listEmployees();
    void totalPerDepartment();
    void addEmployee(IEmployee* employee);
};
