#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    vector<string> s(n);
    vector<int> a(m);
    for (int i=0; i<n; i++)
        cin>>s[i];
    for (int i=0; i<m; i++)
        cin>>a[i];
    for (int i=0; i<m; i++)
    {
        vector<int> c(5,0);
        for (int j=0; j<n; j++)
        {
            c[s[j][i]-'A']++;
        }
        int mx=0;
        for (int j=0; j<5; j++)
            mx=max(mx,c[j]);
        ans+=mx*a[i];
    }
    cout<<ans<<endl;
    return 0;
}
