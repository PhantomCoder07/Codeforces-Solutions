#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for (int i=0; i<n; i++)
            cin>>s[i];
        int mnx=30,mny=30;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (s[i][j]=='R')
                {
                    mnx=min(mnx,i);
                    mny=min(mny,j);
                }
            }
        }
        if (s[mnx][mny]=='R')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
