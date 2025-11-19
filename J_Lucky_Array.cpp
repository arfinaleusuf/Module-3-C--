#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minimum = *min_element(a,a+n);
    int count = 0;
    for(int i = 0; i<n ; i++)
    {
        if(a[i] == minimum)
        {
            count++;
        }
    }
    if(count%2 == 0)
    {
        cout<< "Unlucky";
    }
    else if(count%2 != 0)
    {
        cout << "Lucky";
    } 
    return 0;
}