// name, phone number and address in base1 class, calculate DA, TA and input basic salary in base2 class and calculate gross salary, income tax and all details in derived class

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string phone_number;
    string address;

    void getData()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter phone number: ";
        cin >> phone_number;
        cout << "Enter address: ";
        cin >> address;
    }
};

class Salary : public Employee
{
public:
    float basic_salary, DA, TA;

    void getSalaryData()
    {
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        DA = 0.1 * basic_salary;  // 10% of basic salary
        TA = 0.05 * basic_salary; // 5% of basic salary
    }
};

class Tax : public Salary
{
public:
    float gross_salary, income_tax;

    void calculateTax()
    {
        gross_salary = basic_salary + DA + TA;
        income_tax = 0.1 * gross_salary; // 10% of gross salary
    }

    void displayDetails()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Address: " << address << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "DA: " << DA << endl;
        cout << "TA: " << TA << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Income Tax: " << income_tax << endl;
    }
};

int main()
{
    Tax emp;
    emp.getData();
    emp.getSalaryData();
    emp.calculateTax();
    emp.displayDetails();

    return 0;
}