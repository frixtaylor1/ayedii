#include "./IEmployee.hpp"

class MarketingEmployee : implement IEmployee {
private:
    std::string name;
    int age;
    std::string department;
    static int numberOfEmployee;
    //
    void obtainEmployeeInformation(std::string& name, int& age, std::string& department);
public:
    MarketingEmployee(void);
    MarketingEmployee(std::string name, int age);
    ~MarketingEmployee();
    //
    void showEmployeeInformation();
    void getAmountPerDepartment();
    friend std::ostream& operator<<(std::ostream& stream, MarketingEmployee mkEmployee);
};
//
class SalesEmployee : implement IEmployee {
private:
    std::string name;
    int age;
    std::string department;
    static int numberOfEmployee;
    //
    void obtainEmployeeInformation(std::string& name, int& age, std::string& department);
public:
    SalesEmployee(void);
    SalesEmployee(std::string name, int age);
    ~SalesEmployee();
    //
    void showEmployeeInformation();
    void getAmountPerDepartment();
    friend std::ostream& operator<<(std::ostream& stream, SalesEmployee sEmployee);
};              
//
class ProductionEmployee : implement IEmployee {
private:
    std::string name;
    int age;
    std::string department;
    static int numberOfEmployee;
    //
    void obtainEmployeeInformation(std::string& name, int& age, std::string& department);
public:
    ProductionEmployee(void);
    ProductionEmployee(std::string name, int age);
    ~ProductionEmployee();
    //
    void showEmployeeInformation();
    void getAmountPerDepartment();
    friend std::ostream& operator<<(std::ostream& stream, ProductionEmployee pEmployee);
};
