#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        int mx=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for (int i=0; i<m; i++)
        {
            cin>>b[i];
            mx=max(mx,b[i]);
        }
        vector<ll> f1(mx+1,0);
        for (int i=0; i<n; i++)
            f1[a[i]]++;
        vector<ll> f2(mx+1,0);
        for (int i=1; i<=mx; i++)
        {
            if (f1[i] == 0)
                continue;
            for (int j=i; j<=mx; j+=i)
                f2[j]+=f1[i];
        }
        ll A=0,B=0,C=0;
        for (int i: b)
        {
            if (f2[i]==0)
                B++;
            else if (f2[i]==n)
                A++;
            else
                C++;
        }
        if (A>B)
            cout<<"Alice\n";
        else if (B>A)
            cout<<"Bob\n";
        else
            cout<<((C%2)?"Alice\n":"Bob\n");
    }
}
