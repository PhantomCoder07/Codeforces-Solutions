#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),l(m),r(m);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int c1=count(a.begin(),a.end(),1);
    int c0=n-c1;
    for (int i=0; i<m; i++)
    {
        cin>>l[i]>>r[i];
        int c=abs(r[i]-l[i])+1;
        if (c%2)
            cout<<0<<endl;
        else if (c%2==0 && (c/2)<=min(c1,c0))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
