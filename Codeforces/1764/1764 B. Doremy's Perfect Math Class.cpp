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
        ll ans=0,mx=0;
        for (int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            ans=__gcd(ans,a);
            mx=max(mx,a);
        }
        cout<<mx/ans<<endl;
    }
    return 0;
}
