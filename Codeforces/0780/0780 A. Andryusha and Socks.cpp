#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,ans=0;
    cin>>n;
    vector<int> f(n+1,0);
    for (int i=0; i<2*n; i++)
    {
        int a;
        cin>>a;
        if (f[a]==0)
        {
            f[a]++;
            c++;
        }
        else
        {
            f[a]++;
            c--;
        }
        if (c>ans)
            ans=c;
    }
    cout<<ans;
    return 0;
}
