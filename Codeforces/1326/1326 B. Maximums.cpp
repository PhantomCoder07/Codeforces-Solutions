#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    b[0]=a[0];
    ll sum=a[0];
    for (int i=1; i<n; i++)
    {
        sum+=a[i];
        b[i]=sum;
        if (a[i]<0)
            sum+=(-1)*a[i];
    }
    for (int i=0; i<n; i++)
        cout<<b[i]<<' ';
    return 0;
}
