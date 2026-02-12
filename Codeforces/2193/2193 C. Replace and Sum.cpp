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
        int n,q;
        cin>>n>>q;
        vector<int> a(n),b(n),c(n),d(n),p(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        for (int i=0; i<n; i++)
        {
            d[i]=max(a[i],b[i]);
        }
        c[n-1]=d[n-1];
        for (int i=n-2; i>=0; i--)
        {
            c[i]=max(d[i],c[i+1]);
        }
        p[0]=c[0];
        for (int i=1; i<n; i++)
        {
            p[i]=p[i-1]+c[i];
        }
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            long long ans=p[r-1]-(l>1?p[l-2]:0);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
