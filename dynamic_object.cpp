#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) 
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        
    }
};
int main()
{

    Student rohim(45,5,3.25);
    Student* korim = new Student(2,5,5.00);


    cout<< rohim.roll<< " " << rohim.cls << " " << rohim.gpa << endl;
    cout<< korim->roll<< " " << korim->cls << " " << korim->gpa << endl;
    return 0;
}