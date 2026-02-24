#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        ll sum=0,ans=0;
        for (int i=0; i<n; i++)
        {
            if (sum+x<=b)
                sum+=x;
            else
                sum-=y;
            ans+=sum;
        }
        cout<<ans<<endl;
    }
    return 0;
}
