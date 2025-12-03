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

Student* fun()
{
    Student* korim = new Student (1, 5, 5.00);
    return korim;
}
int main()
{
    Student *p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}