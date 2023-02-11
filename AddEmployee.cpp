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
      // Get employee information from user
      std::string name;
      int age;
      std::string designation;
      float salary;
      cout << "Enter the name of the employee: ";
      cin >> name;
      cout << "Enter the age of the employee: ";
      cin >> age;
      cout << "Enter the designation of the employee: ";
      cin >> designation;
      cout << "Enter the salary of the employee: ";
      cin >> salary;

      // Create the employee object
      Employee employee(name, age, designation, salary);

      // Adds the employee to the database
      database.push_back(employee);
      cout << "Employee added successfully." << endl;
   }
};
