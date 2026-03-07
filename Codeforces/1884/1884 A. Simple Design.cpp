#include <bits/stdc++.h>
using namespace std;
bool solve (int n, int k)
{
    int sum=0;
    while (n>0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    if (sum%k==0)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        int ans;
        for (int i=x; ; i++)
        {
            if (solve(i,k))
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
