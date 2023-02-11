#pragma once
#include <vector>
#include "Employee.h"

class AddEmployee
{
public:
   void addEmployeeToDatabase(std::vector<Employee>& database, std::string name, int age, std::string designation, double salary);
};
