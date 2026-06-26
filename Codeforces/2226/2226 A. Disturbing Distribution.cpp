#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,ans=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
        {
            if (a[i]>1)
                ans+=a[i];
        }
        if (a[n-1]==1)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
