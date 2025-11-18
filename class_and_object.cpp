#include <bits/stdc++.h>
using namespace std;
class Student // total 112 + 4/8 byte jayga nicche
{
    public:
    char name[100];  // 100 byte jayga ney
    int roll;  // 4 byte jayga ney
    double gpa;  // 8 byte jayga ney
};

int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>> a.roll>> a.gpa;
    cin.ignore();
    // othoba getchar diyeo ignore kora jay
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}