#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int x=a[0],y=a[n-1],z=b[0];
    if (max(2*x,y)<z)
        cout<<max(2*x,y)<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
