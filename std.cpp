#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    static void display()
    {
        cout << "Number of Students: " << count << endl;
    }
};

int Student::count = 5;

int main()
{
    Student::display();

    return 0;
}