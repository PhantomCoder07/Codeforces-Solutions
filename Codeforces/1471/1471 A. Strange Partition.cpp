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
        vector<ll> a(n);
        ll sum=0,ans=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            ans+=(a[i]+k-1)/k;
        }
        cout<<(sum+k-1)/k<<' '<<ans<<endl;
    }
    return 0;
}
