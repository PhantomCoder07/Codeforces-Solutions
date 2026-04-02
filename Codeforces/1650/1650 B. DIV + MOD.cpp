#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r,a;
        cin>>l>>r>>a;
        ll ans=r/a+r%a;
        ll b=r/a*a-1;
        if(b>=l)
            ans=max(ans,b/a+b%a);
        cout<<ans<<endl;
    }
}
