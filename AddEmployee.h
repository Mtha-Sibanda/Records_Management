#pragma once
#include <vector>
#include "Employee.h"

using namespace std;

class AddEmployee
{
public:
   void addEmployeeToDatabase(vector<Employee>& database, 
      string name, int age, string designation, double salary);
};
