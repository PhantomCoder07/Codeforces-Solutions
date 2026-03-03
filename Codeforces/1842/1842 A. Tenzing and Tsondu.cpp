#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        ll suma=0,sumb=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        for (int i=0; i<m; i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        if (suma>sumb)
            cout<<"Tsondu"<<endl;
        else if (suma<sumb)
            cout<<"Tenzing"<<endl;
        else
            cout<<"Draw"<<endl;
    }
    return 0;
}
