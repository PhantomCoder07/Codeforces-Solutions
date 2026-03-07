#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> f(n+1),a(n,0),b(n+1,0);
        for (int i=1; i<=n; i++)
            cin>>f[i];
        ll c=(f[1]+f[n])/(n-1);
        for (int i=1; i<=n-1; i++)
        {
            a[i]=(f[i+1]-f[i]+c)/2;
        }
        b[1]=a[1];
        for (int i=2; i<=n-1; i++)
        {
            b[i]=a[i]-a[i-1];
        }
        b[n]=c-a[n-1];
        for (int i=1; i<=n; i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}
