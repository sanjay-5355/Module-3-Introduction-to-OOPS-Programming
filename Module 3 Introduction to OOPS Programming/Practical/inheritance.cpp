#include <iostream>
#include <string.h>
using namespace std;

// Base class
class Person 
{
protected:
    char name[50];
    int age;

public:
    void inputPersonDetails() 
    {
        cout << "Enter name: ";
        cin>> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person 
{
private:
    char course[50];
    int rollNumber;

public:
    void inputStudentDetails() 
    {
        inputPersonDetails();  // Reuse base class function
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter course: ";
        cin>>course;
    }

    void displayStudentDetails() 
    {
        cout << "\nStudent Details:\n";
        displayPersonDetails();  // Reuse base class function
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person 
{
private:
    char subject[50];
    int salary;

public:
    void inputTeacherDetails() 
    {
        inputPersonDetails();  // Reuse base class function
        cout << "Enter subject: ";
        cin>>subject;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherDetails() 
    {
        cout << "\nTeacher Details:\n";
        displayPersonDetails();  // Reuse base class function
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() 
{
    Student student;
    Teacher teacher;

    cout << "Enter student info:\n";
    student.inputStudentDetails();

    cout << "\nEnter teacher info:\n";
    teacher.inputTeacherDetails();

    student.displayStudentDetails();
    teacher.displayTeacherDetails();

    return 0;
}
