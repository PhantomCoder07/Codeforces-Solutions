#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,x,y;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    while (m--)
    {
        cin>>x>>y;
        x--;
        int b=a[x];
        if (x-1>=0)
            a[x-1]+=y-1;
        if (x+1<n)
            a[x+1]+=b-y;
        a[x]=0;
    }
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
