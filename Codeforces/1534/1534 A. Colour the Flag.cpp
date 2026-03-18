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
        bool ans=true;
        int x=-1,y=-1,c;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (s[i][j]=='R')
                {
                    if (x==-1)
                        x=(i+j)%2;
                    else if (x!=(i+j)%2)
                        ans=false;
                }
                if (s[i][j]=='W')
                {
                    if (y==-1)
                        y=(i+j)%2;
                    else if (y!=(i+j)%2)
                        ans=false;
                }
            }
        }
        if (x!=-1 && y!=-1 && x==y)
            ans=false;
        if (!ans)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if (x!=-1)
            c=x;
        else if (y!=-1)
            c=y^1;
        else
            c=0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if ((i+j)%2==c)
                    cout<<'R';
                else
                    cout<<'W';
            }
            cout<<endl;
        }
    }
    return 0;
}
