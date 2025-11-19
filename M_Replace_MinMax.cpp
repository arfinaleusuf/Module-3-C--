#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i =0 ; i<n ;i++)
    {
        cin>> a[i];
    }
    int min = INT_MAX;
    int indOfMin = 0;
    int max = INT_MIN;
    int indOfMax = 0;
    for(int i =0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            indOfMax = i;
        }
        if (a[i]< min)
        {
            min = a[i];
            indOfMin = i;
        }
    }
    swap(a[indOfMax],a[indOfMin]);
    for(int i = 0; i<n; i++)
    {
        cout << a[i]<< " ";
    }
    return 0;
}