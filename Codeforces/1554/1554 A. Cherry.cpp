#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        ll ans=0,maxi=1;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n-1; i++)
        {
            maxi=max(a[i],a[i+1])*min(a[i],a[i+1]);
            ans=max(ans,maxi);
        }
        cout<<ans<<endl;
    }
    return 0;
}
