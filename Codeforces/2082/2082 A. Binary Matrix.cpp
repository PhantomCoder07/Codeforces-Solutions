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
        int mx=0,mn=0;
        for (int i=0; i<n; i++)
        {
            int c=0;
            for (int j=0; j<m; j++)
            {
                if (s[i][j]=='1')
                    c++;
            }
            if (c%2)
                mn++;
        }
        mx=max(mx,mn);
        mn=0;
        for (int i=0; i<m; i++)
        {
            int c=0;
            for (int j=0; j<n; j++)
            {
                if (s[j][i]=='1')
                    c++;
            }
            if (c%2)
                mn++;
        }
        mx=max(mx,mn);
        cout<<mx<<endl;
    }
    return 0;
}
