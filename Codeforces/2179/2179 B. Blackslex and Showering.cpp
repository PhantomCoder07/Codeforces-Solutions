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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        ll sum=0;
        for (int i=0; i<n-1; i++)
        {
            sum+=abs(a[i]-a[i+1]);
        }
        ll ans=min(sum-abs(a[0]-a[1]),sum-abs(a[n-2]-a[n-1]));
        for (int i=1; i<n-1; i++)
        {
            ans=min(ans,sum-abs(a[i+1]-a[i])-abs(a[i]-a[i-1])+abs(a[i+1]-a[i-1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}
