#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n*k);
        for (ll i=0; i<n*k; i++)
            cin>>a[i];
        ll d=(n+2)/2,ans=0;
        for (int i=1; i<=k; i++)
            ans+=a[n*k-i*d];
        cout<<ans<<endl;
    }
    return 0;
}
