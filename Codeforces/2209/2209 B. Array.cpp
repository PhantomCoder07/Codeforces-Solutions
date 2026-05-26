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
        vector<ll> a(n),b(n,0),c(n,0);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=n-1; i>=0; i--)
        {
            for (int j=i+1; j<n; j++)
            {
                b[i]+=(a[i]>a[j]);
                c[i]+=(a[i]<a[j]);
            }
            b[i]=max(b[i],c[i]);
        }
        for (int i=0; i<n; i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}
