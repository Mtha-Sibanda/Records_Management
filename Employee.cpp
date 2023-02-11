#include "Employee.h"

using namespace std;

Employee::Employee(string name, int age, string designation, int salary)
{
    this->name = name;
    this->age = age;
    this->designation = designation;
    this->salary = salary;
}

string Employee::getName()
{
    return name;
}

int Employee::getAge()
{
    return age;
}

string Employee::getDesignation()
{
    return designation;
}

/*
int Employee::getSalary()
{
    return salary;
}
*/