#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        for (int j=0; j<n; j++)
            a[j]=mx-a[j];
        if (k%2==0)
        {
            int mx=*max_element(a.begin(),a.end());
            for (int j=0; j<n; j++)
                a[j]=mx-a[j];
        }
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
