#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int studentId;
    string department;

public:
    Student(string studentName, int studentId, string department)
    {
        this->studentName = studentName;
        this->studentId = studentId;
        this->department = department;
    }

    void showDetails()
    {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Student obj("Rohan", 120, "Information Technology");

    obj.showDetails();

    return 0;
}