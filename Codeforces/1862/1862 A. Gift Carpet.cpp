#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k=0;
        cin>>n>>m;
        char s[n][m];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin>>s[i][j];
            }
        }
        string vika="vika";
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (s[j][i]==vika[k])
                {
                    k++;
                    break;
                }
            }
        }
        if (k>=4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
