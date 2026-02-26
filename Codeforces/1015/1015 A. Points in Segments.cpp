#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    vector<int> a(m+1,0);
    while (n--)
    {
        int l,r;
        cin>>l>>r;
        for (int i=l; i<=r; i++)
            a[i]++;
    }
    for (int i=1; i<=m; i++)
        if (a[i]==0)
            c++;
    cout<<c<<endl;
    for (int i=1; i<=m; i++)
        if (a[i]==0)
            cout<<i<<' ';
    return 0;
}
