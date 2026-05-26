#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int mx=max(x,y);
        int mn=min(x,y);
        if (mn>0 || mx<=0 || (n-1)%mx>0)
            cout<<-1<<endl;
        else
        {
            for (int i=2; i<=n; i+=mx)
                for (int j=1; j<=mx; j++)
                    cout<<i<<' ';
            cout<<endl;
        }
    }
    return 0;
}
