#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll d=abs(b-a);
        ll c=d/5;
        d%=5;
        c+=d/2;
        d%=2;
        c+=d;
        cout<<c<<endl;
    }
    return 0;
}
