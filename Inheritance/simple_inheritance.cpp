// input employee name and basic salary in base class and calculate DA, TA and gross salary in derived class

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    float basic_salary;

    void getData()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }
};

class Salary : public Employee
{
public:
    float DA, TA, gross_salary;

    void calculateSalary()
    {
        DA = 0.1 * basic_salary; // 10% of basic salary
        TA = 0.05 * basic_salary; // 5% of basic salary
        gross_salary = basic_salary + DA + TA;
    }

    void displaySalary()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "DA: " << DA << endl;
        cout << "TA: " << TA << endl;
        cout << "Gross Salary: " << gross_salary << endl;
    }
};

int main()
{
    Salary emp;
    emp.getData();
    emp.calculateSalary();
    emp.displaySalary();

    return 0;
}