#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll> a(n),b(n+1,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i+1]=b[i]+a[i];
        }
        ll sum1=b[n];
        while (q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll sum2=b[r]-b[l-1];
            ll ans=(r-l+1)*k;
            ans=sum1-sum2+ans;
            cout<<(ans%2?"YES":"NO")<<endl;
        }
    }
    return 0;
}
