#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int ans=abs(a-b)+x;
        if (ans<n)
            cout<<ans<<endl;
        else
            cout<<n-1<<endl;
    }
    return 0;
}
