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
   cout << "\t\t\t------------  Main Menu ------------" << endl << endl;
   cout << "\t\t\t\t1. Add Employee" << endl;
   cout << "\t\t\t\t2. View Employees" << endl;
   cout << "\t\t\t\t3. Edit Employee" << endl;
   cout << "\t\t\t\t4. Quit" << endl << endl;
   cout << "\t\tEnter your choice: ";
}

void handleOption(int option, vector<Employee>& database) 
{
   switch (option) 
   {
   case 1:
   {
      string name, designation;
      int age; 
      float salary;
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
      cout << "These are the current employees:" << endl;
      for (Employee employee : database) 
      {
         cout << "Name: " << employee.getName() << endl;
         cout << "Age: " << employee.getAge() << endl;
         cout << "Designation: " << employee.getDesignation() << endl;
         cout << "Salary: " << employee.getSalary() << endl << endl;
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
