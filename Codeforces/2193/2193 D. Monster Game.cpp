#include <bits/stdc++.h>
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
        vector<long long> a(n),b(n),c(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        sort(a.begin(),a.end(),greater<>());
        c[0]=b[0];
        for (int i=1; i<n; i++)
        {
            c[i]=c[i-1]+b[i];
        }
        long long ans=0;
        int l=0;
        for (int i=1; i<=n; i++)
        {
            while (l<n && c[l]<=i)
            {
                l++;
            }
            long long x=a[i-1];
            ans=max(ans,x*l);
        }
        cout<<ans<<endl;
    }
    return 0;
}
