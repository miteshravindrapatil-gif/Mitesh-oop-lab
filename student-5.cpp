#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string branch;

    Student(string n, int r, string b)
    {
        name = n;
        rollNo = r;
        branch = b;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1("Riya", 21, "Computer Engineering");

    s1.display();

    return 0;
}