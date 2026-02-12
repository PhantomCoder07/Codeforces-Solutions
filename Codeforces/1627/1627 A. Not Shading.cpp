#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int b=0,f=0;
        vector<string> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (a[i][j]=='B')
                    b++;
        if (b==0)
            cout<<-1;
        else if (a[r-1][c-1]=='B')
            cout<<0;
        else
        {
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<m; j++)
                {
                    if (a[r-1][j]=='B')
                        f=1;
                    if (a[i][c-1]=='B')
                        f=1;
                }
            }
            if (f==1)
                cout<<1;
            else
                cout<<2;
        }
        cout<<endl;
    }
    return 0;
}
