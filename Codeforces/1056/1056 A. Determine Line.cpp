#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> c(101,0);
    for (int i=0; i<n; i++)
    {
        int r;
        cin>>r;
        for (int j=0; j<r; j++)
        {
            int a;
            cin>>a;
            c[a]++;
        }
    }
    for (int i=1; i<=100; i++)
    {
        if (c[i]==n)
            cout<<i<<' ';
    }
    return 0;
}
