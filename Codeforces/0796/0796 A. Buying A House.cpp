#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int mn=INT_MAX;
    for (int i=0; i<n; i++)
    {
        if (a[i]<=k && a[i]!=0)
        {
            mn=min(mn,abs(m-(i+1)));
        }
    }
    cout<<10*mn<<endl;
    return 0;
}
