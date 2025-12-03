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
    Student korim(2, 5, 5.00);
    Student *p = &korim;
    return p;
}
Student * prac()
{
    Student rohim(4,5,4.75);
    Student *p = &rohim;
    return p;
}
int main()
{
    Student *p = prac();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
// it will show wrong ans