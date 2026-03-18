#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        vector<long long> c[2];
        for (int i=0; i<n; i++)
            c[a[i]].push_back(b[i]);
        sort(c[0].begin(),c[0].end());
        sort(c[1].begin(),c[1].end());
        long long ans=0;
        if (c[0].size()==c[1].size() && !c[0].empty())
            ans-=min(c[0][0],c[1][0]);
        while (!c[0].empty() && !c[1].empty())
        {
            ans+=2LL*(c[0].back()+c[1].back());
            c[0].pop_back();
            c[1].pop_back();
        }
        for (auto i: c[0])
            ans+=i;
        for (auto i: c[1])
            ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}
