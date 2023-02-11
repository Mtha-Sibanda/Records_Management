#pragma once
#include "Employee.h"
#include <vector>
#include <fstream>
#include <iostream>

class AddEmployee
{
public:
   static void addEmployeeToDatabase(std::vector<Employee>& database)
   {
      Employee employee;
      cout << "Enter the name of the employee: ";
      cin >> employee.name;
      cout << "Enter the age of the employee: ";
      cin >> employee.age;
      cout << "Enter the designation of the employee: ";
      cin >> employee.designation;
      cout << "Enter the salary of the employee: ";
      cin >> employee.salary;

      // Adds the employee to the database
      database.push_back(employee);
      cout << "Employee added successfully." << endl;
   }
};
