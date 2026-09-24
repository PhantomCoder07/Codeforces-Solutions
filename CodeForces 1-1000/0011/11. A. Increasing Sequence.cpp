#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,ans=0;
    cin>>n>>d;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n-1; i++)
    {
        if (a[i]>=a[i+1])
        {
            int m=a[i]-a[i+1];
            int k=m/d+1;
            a[i+1]+=k*d;
            ans+=k;
        }
    }
    cout<<ans<<endl;
    return 0;
}
