#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for (int i=n-1; i>=0; i-=2)
            sum+=a[i];
        cout<<fixed<<setprecision(0)<<sum<<endl;
    }
    return 0;
}
