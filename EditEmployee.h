#pragma once
#include "Employee.h"
#include <vector>

class EditEmployee
{
public:
   static void edit(std::vector<Employee>& database)
   {
      std::string name;
      cout << "Enter the name of the employee you wish to edit: ";
      cin >> name;

      bool employeeFound = false;
      for (Employee& employee : database)
      {
         if (employee.name == name)
         {
            employeeFound = true;

            // Get new employee information from user
            int age;
            std::string designation;
            float salary;
            cout << "Enter the updated age of the employee: ";
            cin >> age;
            cout << "Enter the updated designation of the employee: ";
            cin >> designation;
            cout << "Enter the updated salary of the employee: ";
            cin >> salary;

            // Update the employee information
            employee.age = age;
            employee.designation = designation;
            employee.salary = salary;
            cout << "Employee information updated successfully." << endl;
            break;
         }
      }
      if (!employeeFound)
      {
         cout << "Employee not found in the database." << endl;
      }
   }
};
