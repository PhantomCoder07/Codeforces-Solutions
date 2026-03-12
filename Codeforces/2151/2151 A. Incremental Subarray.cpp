#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(m);
        for (int i=0; i<m; i++)
            cin>>a[i];
        int ans=n-a[m-1]+1;
        for (int i=1; i<m; i++)
            if (a[i]==1)
                ans=1;
        cout<<ans<<endl;
    }
    return 0;
}
