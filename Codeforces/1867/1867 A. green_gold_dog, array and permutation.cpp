#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>> a(n);
        vector<ll> ans(n);
        for (int i=0; i<n; i++)
        {
            ll k;
            cin>>k;
            a[i].first=k;
            a[i].second=i;
        }
        sort(a.rbegin(),a.rend());
        for (ll i=0; i<n; i++)
            ans[a[i].second]=i+1;
        for (int i=0; i<n; i++)
                cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
}
