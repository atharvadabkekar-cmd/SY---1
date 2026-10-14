/* #include <iostream>
using namespace std;

class Student
{
public:
    
    Student()
   {
        cout << "Constructor Called" << endl;
    }

    
    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1;

    return 0;
}*/


#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
    }

    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1(101, "Atharva");
    s1.display();
    return 0;
}