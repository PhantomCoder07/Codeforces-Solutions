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
        vector<vector<int>> a(n,vector<int>(m));
        int mxi=0,mxj=0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if (a[i][j]>a[mxi][mxj])
                {
                    mxi=i;
                    mxj=j;
                }
            }
        }
        int h=max(mxi+1,n-mxi);
        int w=max(mxj+1,m-mxj);
        cout<<h*w<<endl;
    }
    return 0;
}
