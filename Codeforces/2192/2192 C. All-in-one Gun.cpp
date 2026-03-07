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
        ll n,h,k;
        cin>>n>>h>>k;
        vector<ll> a(n),b(n),c(n),d(n);
        ll sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll m=(h-1)/sum;
        ll r=h-m*sum;
        b[0] = a[0];
        for (int i=1; i<n; i++)
            b[i]=b[i-1]+a[i];
        c[0]=a[0];
        for (int i=1; i<n; i++)
            c[i]=min(c[i-1],a[i]);
        d[n-1]=a[n-1];
        for (int i=n-2; i>=0; i--)
            d[i]=max(d[i+1],a[i]);
        int p=n;
        for (int i=0; i<n; i++)
        {
            ll e=b[i];
            if (i+1<n)
            {
                ll g=d[i+1]-c[i];
                if (g>0)
                    e+=g;
            }
            if (e>=r)
            {
                p=i+1;
                break;
            }
        }
        ll ans=m*(n+k)+p;
        cout<<ans<<endl;
    }
}
