#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a;
    for (int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        a.emplace_back(y,x);
    }
    sort(a.begin(),a.end());
    long long ans=LLONG_MIN;
    for (auto i: a)
    {
        if (i.first<=k)
            ans=max(ans,1LL*i.second);
        else
        {
            ans=max(ans,1LL*(i.second-(i.first-k)));
        }
    }
    cout<<ans<<endl;
    return 0;
}
