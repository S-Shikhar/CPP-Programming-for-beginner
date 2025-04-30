// input student name, roll number in base1 class, input 3 subject marks and calculate avg, total of semester 1 in derive1 class, input 3 subject marks and calculate avg, total of semester 2 in derive2 class

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_number;

    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_number;
    }
};

class Semester1 : public Student
{
public:
    float marks1, marks2, marks3, total1, avg1;

    void getSemester1Data()
    {
        cout << "Enter marks for Semester 1:" << endl;
        cout << "Subject 1: ";
        cin >> marks1;
        cout << "Subject 2: ";
        cin >> marks2;
        cout << "Subject 3: ";
        cin >> marks3;
    }

    void calculateSemester1()
    {
        total1 = marks1 + marks2 + marks3;
        avg1 = total1 / 3.0;
    }

    void displayDetailsSem1()
    {
        cout << endl;
        cout << "Student details for Semester 1:" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Semester 1 Total Marks: " << total1 << endl;
        cout << "Semester 1 Average Marks: " << avg1 << endl;
    }
};

class Semester2 : public Student
{
public:
    float marks4, marks5, marks6, total2, avg2;

    void getSemester2Data()
    {
        cout << endl;
        cout << "Enter marks for Semester 2:" << endl;
        cout << "Subject 1: ";
        cin >> marks4;
        cout << "Subject 2: ";
        cin >> marks5;
        cout << "Subject 3: ";
        cin >> marks6;
    }

    void calculateSemester2()
    {
        total2 = marks4 + marks5 + marks6;
        avg2 = total2 / 3.0;
    }

    void displayDetailsSem2()
    {
        cout << endl;
        cout << "Student details for Semester 2:" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Semester 2 Total Marks: " << total2 << endl;
        cout << "Semester 2 Average Marks: " << avg2 << endl;
    }
};

int main()
{
    Semester1 sem1;
    sem1.getData(); 
    sem1.getSemester1Data();
    sem1.calculateSemester1();
    sem1.displayDetailsSem1();

    Semester2 sem2;
    sem2.name = sem1.name; // Copy inherited data
    sem2.roll_number = sem1.roll_number;
    sem2.getSemester2Data();
    sem2.calculateSemester2();
    sem2.displayDetailsSem2();

    return 0;
}