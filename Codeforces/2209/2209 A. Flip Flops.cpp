#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,c,k;
        cin>>n>>c>>k;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
        {
            if (a[i]<=c)
            {
                ll m=min(c-a[i],k);
                k-=m;
                c+=a[i]+m;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
