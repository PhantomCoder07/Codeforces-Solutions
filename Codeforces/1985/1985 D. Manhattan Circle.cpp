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
        int mx=0,mxi=-1,mxj=-1;
        for (int i=0; i<n; i++)
        {
            int c=0;
            for (int j=0; j<m; j++)
                if (s[i][j]=='#')
                    c++;
            if (c>mx)
            {
                mx=c;
                mxi=i;
            }
        }
        mx=0;
        for (int i=0; i<m; i++)
        {
            int c=0;
            for (int j=0; j<n; j++)
                if (s[j][i]=='#')
                    c++;
            if (c>mx)
            {
                mx=c;
                mxj=i;
            }
        }
        cout<<mxi+1<<' '<<mxj+1<<endl;
    }
    return 0;
}
