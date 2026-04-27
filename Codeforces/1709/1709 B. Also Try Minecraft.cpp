#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<ll> a(n+1),b(n+1,0),c(n+2,0);
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=2; i<=n; i++)
        b[i]=b[i-1]+max(0LL,a[i-1]-a[i]);
    for(int i=n-1; i>=1; i--)
        c[i]=c[i+1]+max(0LL,a[i+1]-a[i]);
    while(m--)
    {
        int s,t;
        cin>>s>>t;
        cout<<(s<t?b[t]-b[s]:c[t]-c[s])<<endl;
    }
    return 0;
}
