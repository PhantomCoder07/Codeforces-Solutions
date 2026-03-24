#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (n%m==0)
    {
        for (int i=0; i<m; i++)
            cout<<n/m<<' ';
    }
    else
    {
        vector<int> a(m,n/m);
        for (int i=0; i<n-(m*(n/m)); i++)
            a[i]++;
        reverse(a.begin(),a.end());
        for (int i=0; i<m; i++)
            cout<<a[i]<<' ';
    }
    return 0;
}
