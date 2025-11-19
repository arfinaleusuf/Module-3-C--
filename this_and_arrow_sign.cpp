#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) 
    {
        // (*this).roll = r;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        
    }
};
int main()
{
    int r;
    int c;
    double g;
    Student rohim(45,5,3.25);
    cin>> rohim.roll >> rohim.cls >> rohim.gpa;


    // Student korim();


    cout<< rohim.roll<< " " << rohim.cls << " " << rohim.gpa << endl;
    // cout<< korim.roll<< " " << korim.cls << " " << korim.gpa << endl;
    return 0;
}