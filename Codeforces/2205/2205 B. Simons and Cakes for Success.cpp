#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k=1,m=n;
        for (ll i=2; i*i<=m; i++)
        {
            if (m%i==0)
            {
                k*=i;
                while (m%i==0)
                {
                    m/=i;
                }
            }
        }
        if (m>1)
            k*=m;
        cout<<k<<endl;
    }
    return 0;
}
