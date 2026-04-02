#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll cp=0,cn=0,c0=0,sum=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]>0)
            cp++;
        if (a[i]<0)
            cn++;
        if (a[i]==0)
            c0++;
    }
    sort(a.begin(),a.end());
    if (c0==n)
        cout<<n<<endl;
    else if (cn%2==0)
    {
        for (int i=0; i<n; i++)
        {
            if (a[i]<0)
                sum+=abs(a[i]+1);
            if (a[i]>0)
                sum+=a[i]-1;
        }
        cout<<sum+c0<<endl;
    }
    else
    {
        ll m=cn-1;
        for (int i=0; i<m; i++)
            sum+=abs(a[i]+1);
        if (c0!=0)
            sum+=abs(a[m]+1);
        else
            sum+=abs(a[m]-1);
        for (int i=m+1; i<n; i++)
            if (a[i]!=0)
                sum+=a[i]-1;
        cout<<sum+c0<<endl;
    }
    return 0;
}
