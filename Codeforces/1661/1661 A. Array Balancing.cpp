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
        vector<ll> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        for (int i=0; i<n; i++)
        {
            if (a[i]>b[i])
                swap(a[i],b[i]);
        }
        ll suma=0,sumb=0;
        for (int i=0; i<n-1; i++)
        {
            suma+=abs(a[i]-a[i+1]);
            sumb+=abs(b[i]-b[i+1]);
        }
        cout<<suma+sumb<<endl;
    }
    return 0;
}
