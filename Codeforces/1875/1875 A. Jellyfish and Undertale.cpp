#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,n,sum=0;
        cin>>a>>b>>n;
        vector<ll> x(n);
        for (int i=0; i<n; i++)
        {
            cin>>x[i];
            sum+=min(a-1,x[i]);
        }
        cout<<sum+b<<endl;
    }
    return 0;
}
