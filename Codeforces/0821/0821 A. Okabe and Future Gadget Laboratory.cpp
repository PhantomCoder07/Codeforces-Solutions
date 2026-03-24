#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i][j]==1)
                continue;
            bool ans=false;
            for (int k=0; k<n; k++)
            {
                if (k==i)
                    continue;
                for (int l=0; l<n; l++)
                {
                    if (l==j)
                        continue;
                    int sum=a[k][j]+a[i][l];
                    if (sum==a[i][j])
                    {
                        ans=true;
                        break;
                    }
                }
                if (ans)
                    break;
            }
            if (!ans)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
