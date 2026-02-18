#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum (ll n)
{
    ll ans=0;
    while (n>0)
    {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
int solve (ll n)
{
    return __gcd(n,sum(n));
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        int ans=solve(n);
        while (ans<2)
        {
            n++;
            ans=solve(n);
        }
        cout<<n<<endl;
    }
    return 0;
}
