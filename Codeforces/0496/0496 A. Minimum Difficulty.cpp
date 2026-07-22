#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    if (n==3)
    {
        cout<<a[n-1]-a[0]<<endl;
        return 0;
    }
    int mn=INT_MAX,mx=INT_MIN;
    for (int i=1; i<n; i++)
    {
        mx=max(mx,a[i]-a[i-1]);
    }
    for (int i=1; i<n-1; i++)
    {
        mn=min(mn,max(mx,a[i+1]-a[i-1]));
    }
    cout<<mn<<endl;
    return 0;
}
