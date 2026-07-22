#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        ll sum=accumulate(a.begin(),a.end(),0LL);
        ll mx=*max_element(a.begin(),a.end());
        ll mn=*min_element(a.begin(),a.end());
        ll ans=n+sum-mn+mx;
        if (ans<=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
