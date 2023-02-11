#pragma once
#include <string>

using namespace std;

class Employee {
private:

public:
   string name;
   int age;
   string designation;
   float salary;

   Employee(string name, int age, string designation, float salary);

   string getName() { return name; }
   int getAge() { return age; }
   string getDesignation() { return designation; }
   float getSalary() { return salary; }
};
