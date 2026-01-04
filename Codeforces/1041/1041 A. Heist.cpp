#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int mx=0,mn=INT_MAX;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<max(0,(mx-mn)-n+1)<<endl;
    return 0;
}
