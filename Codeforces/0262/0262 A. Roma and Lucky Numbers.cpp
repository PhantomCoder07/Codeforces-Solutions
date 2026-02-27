#include <bits/stdc++.h>
#define ll long long
using namespace std;
int digit (ll a)
{
    int c=0;
    while (a)
    {
        int d=a%10;
        if (d==4 || d==7)
        c++;
        a/=10;
    }
    return c;
}
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    vector<ll> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n; i++)
    {
        if (digit(a[i])<=k)
            c++;
    }
    cout<<c;
    return 0;
}
