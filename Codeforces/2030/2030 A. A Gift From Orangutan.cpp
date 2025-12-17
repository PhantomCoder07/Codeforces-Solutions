#include <bits/stdc++.h>
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
        int ma=INT_MIN,mi=INT_MAX;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            ma=max(ma,a[i]);
            mi=min(mi,a[i]);
        }
        vector<int> b(n),c(n);
        b[0]=ma,c[0]=ma;
        for (int i=1; i<n; i++)
        {
            b[i]=mi;
            c[i]=ma;
        }
        int ans=0;
        for (int i=0; i<n; i++)
        {
            ans+=c[i]-b[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
