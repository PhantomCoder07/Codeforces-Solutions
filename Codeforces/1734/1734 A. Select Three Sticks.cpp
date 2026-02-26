#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        for (int i=2; i<n; i++)
            ans=min(ans,a[i]-a[i-2]);
        cout<<ans<<endl;
    }
    return 0;
}
