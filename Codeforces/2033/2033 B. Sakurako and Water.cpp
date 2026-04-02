#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(n));
        for (int i=n-1; i>=0; i--)
            for (int j=0; j<n; j++)
                cin>>a[i][j];
        int ans=0;
        for (int i=0; i<2*n-1; i++)
        {
            int mn=0;
            for (int j=0; j<n; j++)
            {
                for (int k=0; k<n; k++)
                {
                    if (j+k==m && a[j][k]<0)
                        mn=min(mn,a[j][k]);
                }
            }
            m++;
            ans-=mn;
        }
        cout<<ans<<endl;
    }
    return 0;
}
