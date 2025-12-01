#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        vector<int> a(n+1),b(n+1);
        for (int i=0; i<n; i++)
        {
            cin>>m;
            a[m]++;
            b[m]=i+1;
        }
        int ans=-1;
        for (int i=0; i<=n; i++)
        {
            if (a[i]==1)
            {
                ans=b[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
