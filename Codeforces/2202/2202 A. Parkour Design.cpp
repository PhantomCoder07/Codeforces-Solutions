#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=x-2*y;
        if (ans>=0 && ans%3==0 && ans/3>=2*max(0LL,-y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
