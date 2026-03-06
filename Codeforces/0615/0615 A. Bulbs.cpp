#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> c(m+1,0);
    while (n--)
    {
        int x;
        cin>>x;
        vector<int> y(x);
        for (int i=0; i<x; i++)
        {
            cin>>y[i];
            c[y[i]]++;
        }
    }
    for (int i=1; i<=m; i++)
    {
        if (c[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
