#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve (ll s, ll m, ll n)
{
    ll l=0,r=0;
    for (int i=0; i<62; i++)
    {
        ll sc=(s>>i)&1;
        ll mc=(m>>i)&1;
        if (mc==0)
        {
            ll ln=-1,rn=-1;
            for (int j=0; j<2; j++)
            {
                if (j!=sc)
                    continue;
                ll first=((l%2==j)?l:l+1);
                if (first<=r)
                {
                    ll low=(first-sc)/2;
                    ll high=(r-((r%2==j)?0:1)-sc)/2;
                    if (ln==-1 || low<ln)
                        ln=low;
                    if (rn==-1 || high>rn)
                        rn=high;
                }
            }
            if (ln==-1)
                return false;
            l=ln;
            r=rn;
        }
        else
        {
            ll lt=l;
            ll rt=r+n;
            ll first=((lt%2==sc)?lt:lt+1);
            if (first>rt)
                return false;
            ll last = ((rt%2==sc)?rt:rt-1);
            l=(first-sc)/2;
            r= (last-sc)/2;
        }
    }
    return (l<=0 && 0<=r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll s,m;
        cin>>s>>m;
        ll p=m&(-m);
        if (s%p!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        ll st=1,ed=s/p;
        ll ans=-1;
        while (st<=ed)
        {
            ll mid=(st+ed)/2;
            if (solve(s,m,mid))
            {
                ans = mid;
                ed=mid-1;
            }
            else
                st=mid+1;
        }
        cout<<ans<<endl;
    }
}
