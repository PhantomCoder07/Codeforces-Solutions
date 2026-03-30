#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long> a(n),b(n+1,0);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for (int i=0; i<n; i++)
        b[i+1]=b[i]+a[i];
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<b[n-x+y]-b[n-x]<<endl;
    }
    return 0;
}
