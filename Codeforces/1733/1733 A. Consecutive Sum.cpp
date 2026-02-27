#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> f(100005,0);
        ll sum=0;
        for (int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            f[i%k]=max(f[i%k],a);
        }
        for (int i=0; i<k; i++)
            sum+=f[i];
        cout<<sum<<endl;
    }
    return 0;
}
