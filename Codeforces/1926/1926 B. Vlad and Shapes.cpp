#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0,ans=0;
        cin>>n;
        char s[n][n];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin>>s[i][j];
            }
        }
        for (int i=0; i<n; i++)
        {
            c=0;
            for (int j=0; j<n; j++)
            {
                if (s[i][j]=='1')
                    c++;
            }
            if (c==1)
            {
                ans=1;
            }
        }
        if (ans==0)
            cout<<"SQUARE"<<endl;
        else
            cout<<"TRIANGLE"<<endl;
    }
    return 0;
}
