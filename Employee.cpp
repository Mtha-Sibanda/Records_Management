#include "Employee.h"

using namespace std;

// Constructor to initialize the member variables
Employee::Employee(string name, int age, string designation, float salary)
   : name(name), age(age), designation(designation), salary(salary) {}

// Getter functions for the member variables
string Employee::getName() { return name; }
int Employee::getAge() { return age; }
string Employee::getDesignation() { return designation; }
float Employee::getSalary() { return salary; }
