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
        int ans=1;
        for (int i=0; i<n; i++)
        {
            if (a[i]==1)
                ans++;
            if (a[i]==1 && a[i-1]==1 && i>0)
                ans+=4;
            if (a[i]==0 && a[i+1]==0 && i<n-1)
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
