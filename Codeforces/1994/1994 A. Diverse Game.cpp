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
        vector<vector<int>> a(n,vector<int>(m,0));
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cin>>a[i][j];
        if (n==m && n==1)
            cout<<-1<<endl;
        else
        {
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<m; j++)
                {
                    cout<<a[(i+1)%n][(j+1)%m]<<' ';
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
