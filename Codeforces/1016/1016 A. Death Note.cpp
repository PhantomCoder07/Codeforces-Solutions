#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r=0;
    cin>>n>>m;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        r+=a[i];
        cout<<r/m<<' ';
        r%=m;
    }
    cout<<endl;
    return 0;
}
