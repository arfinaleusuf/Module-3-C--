#include <bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    char name[20];
    char dip;
    int salary;
};
int main()
{
    Employee arfin;
    cin.getline(arfin.name,20);
    cin>> arfin.dip;
    cin>> arfin.salary;
    cout<<arfin.name<< " " << arfin.dip << " " << arfin.salary;
    return 0;
}