#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=abs(a-b)+abs(b-c)+abs(a-c);
        for (int i=-1; i<=1; i++)
        {
            for (int j=-1; j<=1; j++)
            {
                for (int k=-1; k<=1; k++)
                {
                    ll ai=a+i;
                    ll bj=b+j;
                    ll ck=c+k;
                    ans=min(ans,abs(ai-bj)+abs(ai-ck)+abs(bj-ck));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
