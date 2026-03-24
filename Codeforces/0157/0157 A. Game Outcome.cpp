#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    if (n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    vector<int> col(n*n,0),row(n*n,0);
    int k=0;
    for (int i=0; i<n; i++)
    {
        int sum=0;
        for (int j=0; j<n; j++)
        {
            sum+=a[i][j];
        }
        for (int j=0; j<n; j++)
        {
            row[k++]=sum;
        }
    }
    k=0;
    for (int i=0; i<n; i++)
    {
        int sum=0;
        for (int j=0; j<n; j++)
        {
            sum+=a[j][i];
        }
        col[k++]=sum;
    }
    for (int i=0; i<(n*n)-n; i++)
    {
        col[i+n]=col[i];
    }
    for (int i=0; i<n*n; i++)
    {
        if (col[i]>row[i])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
