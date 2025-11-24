#include <bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string name;
    char dip;
    int salary;
    Employee(string name, char dip, int salary)
    {
        this->name = name;
        this->dip = dip;
        this->salary = salary;
    }
};
int main()
{
    string name = "Arfin Al Eusuf";
    Employee arfin(name,'A',100000);
    cout<<arfin.name<< " " << arfin.dip << " " << arfin.salary;
    return 0;
}