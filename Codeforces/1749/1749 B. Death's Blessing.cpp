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
        ll suma=accumulate(a.begin(),a.end(),0LL);
        ll sumb=accumulate(b.begin(),b.end(),0LL);
        ll mxb=*max_element(b.begin(),b.end());
        cout<<suma+sumb-mxb<<endl;
    }
    return 0;
}
