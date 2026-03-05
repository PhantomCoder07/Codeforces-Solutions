#include <bits/stdc++.h>
using namespace std;
int solve (int k, int a, int b, int x, int y)
{
        int ans=0;
        ans+=max((k-a+x)/x,0);
        k-=max((k-a+x)/x,0)*x;
        ans+=max((k-b+y)/y,0);
        return ans;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        cout<<max(solve(k,a,b,x,y),solve(k,b,a,y,x))<<endl;
    }
    return 0;
}
