#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        ll ans=n*min(a,b);
        ll k=n/(m+1);
        ll r=n%(m+1);
        cout<<min(ans,k*m*a+r*min(a,b))<<endl;
    }
    return 0;
}
