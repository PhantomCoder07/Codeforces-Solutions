#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j=-1,c=0;
        cin>>n;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]!=0 && j==-1)
                j=i;
        }
        if (j==-1)
        {
            cout<<0<<endl;
            continue;
        }
        for (int i=j; i<n-1; i++)
            if (a[i]==0)
                c++;
        ll ans=accumulate(a.begin(),a.end(),0LL);
        cout<<ans-a[n-1]+c<<endl;
    }
    return 0;
}
