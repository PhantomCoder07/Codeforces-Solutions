#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    int t=n-1,ans=0;
    if (v>=n-1)
        cout<<n-1<<endl;
    else
    {
        ans+=v;
        t-=v;
        for (int i=2; i<n && t; i++)
        {
            ans+=i;
            t--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
