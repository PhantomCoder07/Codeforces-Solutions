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
        ll sum=accumulate(b.begin(),b.end(),0LL);
        ll mx=*max_element(a.begin(),a.end());
        cout<<mx+sum<<endl;
    }
    return 0;
}
