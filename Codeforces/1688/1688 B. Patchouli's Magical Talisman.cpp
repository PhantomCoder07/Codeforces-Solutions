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
        int ans=0,mn=INT_MAX;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            ans+=(a[i]%2==0);
            mn=min(mn,(a[i]&-a[i]));
        }
        if (mn>1)
            ans+=__builtin_ctz(mn)-1;
        cout<<ans<<endl;
    }
    return 0;
}
