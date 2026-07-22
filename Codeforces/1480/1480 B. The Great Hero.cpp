#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> ma(n),mb(n);
        for (int i=0; i<n; i++)
            cin>>ma[i];
        for (int i=0; i<n; i++)
            cin>>mb[i];
        ll sum=0;
        bool ans=false;
        for (int i=0; i<n; i++)
            sum+=(mb[i]+a-1)/a*ma[i];
        for (int i=0; i<n; i++)
        {
            if (b-(sum-ma[i])>0)
            {
                ans=true;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
