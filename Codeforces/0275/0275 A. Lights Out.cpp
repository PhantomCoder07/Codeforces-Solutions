#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a(5,vector<int>(5));
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            cout<<1-((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1]))%2;
        }
        cout<<endl;
    }
    return 0;
}
