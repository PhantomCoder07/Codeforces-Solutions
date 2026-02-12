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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        ll c=0;
        for (int i=0; i<n; i++)
            c+=(a[i]/x)*y;
        ll ans=0;
        for (int i=0; i<n; i++)
        {
            ll d=a[i]-(a[i]/x)*y;
            ans=max(ans,d);
        }
        cout<<c+ans<<endl;
    }
    return 0;
}
