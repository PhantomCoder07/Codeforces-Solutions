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
        int p=n-1;
        vector<int> a(n,-1),b(m),c(n+m+5);
        for (int i=0; i<m; i++)
        {
            cin>>b[i];
            if (p>=0 && !c[b[i]])
                a[p--]=i+1;
            c[b[i]]=1;
        }
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
