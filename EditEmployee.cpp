#pragma once
#include "Employee.h"
#include <vector>
#include <iostream>

using namespace std;

class EditEmployee
{
public:
   static void editEmployeeInDatabase(std::vector<Employee>& database)
   {
      // Get the name of the employee to be edited
      std::string name;
      cout << "Enter the name of the employee to be edited: ";
      cin >> name;

      // Find the employee in the database
      int index = -1;
      for (int i = 0; i < database.size(); i++)
      {
         if (database[i].getName() == name)
         {
            index = i;
            break;
         }
      }

      // Check if the employee was found
      if (index == -1)
      {
         cout << "Employee not found." << endl;
         return;
      }

      // Get the new information for the employee
      int age;
      std::string designation;
      float salary;
      cout << "Enter the new age of the employee: ";
      cin >> age;
      cout << "Enter the new designation of the employee: ";
      cin >> designation;
      cout << "Enter the new salary of the employee: ";
      cin >> salary;

      // Update the employee information
      database[index].age = age;
      database[index].designation = designation;
      database[index].salary = salary;

      cout << "Employee information updated successfully." << endl;
   }
};
