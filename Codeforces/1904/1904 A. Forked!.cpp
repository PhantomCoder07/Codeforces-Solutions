#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,xK,yK,xQ,yQ;
        cin>>a>>b>>xK>>yK>>xQ>>yQ;
        vector<pair<ll,ll>> moves={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
        set<pair<ll,ll>> kp,qp;
        for (auto [ix,iy]: moves)
        {
            kp.insert({xK+ix,yK+iy});
        }
        for (auto [ix,iy]: moves)
        {
            qp.insert({xQ+ix,yQ+iy});
        }
        int ans=0;
        for (auto &p: kp)
            if (qp.count(p))
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}
