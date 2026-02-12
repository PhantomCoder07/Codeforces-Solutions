#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,w;
        cin>>n>>w;
        ll a=n/w;
        ll b=n%w;
        cout<<a*(w-1)+min(b,w-1)<<endl;
    }
    return 0;
}
