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
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
            cin>>b[i];
        sort(b.begin(),b.end());
        ll suma=accumulate(a.begin(),a.end(),0LL);
        ll sumb=accumulate(b.begin(),b.end(),0LL);
        cout<<min(suma+(ll)(n*b[0]),sumb+(ll)(n*a[0]))<<endl;
    }
    return 0;
}
