#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> s;
    for (int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        s.push_back({b,a});
    }
    sort(s.rbegin(),s.rend());
    int ans=0;
    for (int i=0; i<m; i++)
    {
        ans+=(s[i].first*min(n,s[i].second));
        n-=min(n,s[i].second);
    }
    cout<<ans<<endl;
    return 0;
}
