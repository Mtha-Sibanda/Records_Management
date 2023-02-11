#pragma once
#include <string>

using namespace std;

// Class definition for Employee
class Employee {
private:
   // Member variables for name, age, designation, and salary
   string name;
   int age;
   string designation;
   float salary;

public:
   // Constructor to initialize the member variables
   Employee(string name, int age, string designation, float salary)
      : name(name), age(age), designation(designation), salary(salary) {}

   // Getter functions for the member variables
   string getName() { return name; }
   int getAge() { return age; }
   string getDesignation() { return designation; }
   float getSalary() { return salary; }
};
