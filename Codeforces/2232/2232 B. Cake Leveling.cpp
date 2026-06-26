#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        ll ans=1e9,sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            ans=min(ans,sum/(i + 1));
            cout<<ans<<' ';
        }
        cout<<endl;
    }
    return 0;
}
