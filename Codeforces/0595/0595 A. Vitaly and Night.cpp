#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(2*m));
    for (int i=0; i<n; i++)
        for (int j=0; j<2*m; j++)
            cin>>a[i][j];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2*m; j+=2)
        {
            if (a[i][j]==1 || a[i][j+1]==1)
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
