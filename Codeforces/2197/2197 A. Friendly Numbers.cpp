#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ds (ll n)
{
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll x,c=0;
        cin>>x;
        for (int i=1; i<=100; i++)
        {
            ll y=x+i;
            if (ds(y)==i)
                c++;
        }
        cout<<c<<endl;
    }
}
