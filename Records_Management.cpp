#include <iostream>
#include <vector>
#include "AddEmployee.h"
#include "Employee.h"

using namespace std;

void showMenu();
void handleOption(int option, vector<Employee>& database);

int main()
{
   vector<Employee> database;
   int option;
   do
   {
      showMenu();
      cin >> option;
      handleOption(option, database);
   } while (option != 4);

   return 0;
}

void showMenu()
{
   cout << "1. Add Employee" << endl;
   cout << "2. View Employees" << endl;
   cout << "3. Edit Employee" << endl;
   cout << "4. Quit" << endl;
   cout << "Enter your choice: ";
}

void handleOption(int option, vector<Employee>& database)
{
   switch (option)
   {
   case 1:
   {
      string name, designation;
      int age, salary;
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter designation: ";
      cin >> designation;
      cout << "Enter salary: ";
      cin >> salary;
      Employee employee(name, age, designation, salary);
      database.push_back(employee);
      cout << "Record added successfully!" << endl;
      break;
   }
   case 2:
      cout << "Employees:" << endl;
      for (Employee employee : database)
      {
         cout << "Name: " << employee.getName() << endl;
         cout << "Age: " << employee.getAge() << endl;
         cout << "Designation: " << employee.getDesignation() << endl;
         cout << "Salary: " << employee.getSalary() << endl;
      }
      break;
   case 3:
      cout << "Edit option not yet implemented" << endl;
      break;
   case 4:
      break;
   default:
      cout << "Invalid option" << endl;
   }
}
