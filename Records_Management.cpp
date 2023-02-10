// Records_Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   while (true) {
      cout << "\t\t\t--------------  Main Menu  --------------" << endl << endl;
      cout << "\t\t\t\t1. Add Employee" << endl;
      cout << "\t\t\t\t2. Edit Employee" << endl;
      cout << "\t\t\t\t3. Delete Employee" << endl;
      cout << "\t\t\t\t4. View Employee" << endl;
      cout << "\t\t\t\t5. Exit" << endl << endl;
      cout << "\t\t\t\tEnter your choice: ";

      int choice;
      cin >> choice;

      if (choice == 5) {
         break;
      }

   }
}
