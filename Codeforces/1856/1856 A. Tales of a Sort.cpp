#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        /*
        int c=0;
        while (1)
        {
            if (is_sorted(a.begin(),a.end()))
                break;
            for (int i=0; i<n; i++)
            {
                a[i]=max(0,a[i]-1);
            }
            c++;
        }
        cout<<c<<endl;
        */
        ll ans=0;
        for (int i=0; i<n-1; i++)
        {
            if (a[i]>a[i+1])
                ans=max(ans,a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
