#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> a(3);
        cin>>a[0]>>a[1]>>a[2];
        int ans=-1;
        for (int i=0; i<=min(a[0],a[1]); i++)
        {
            for (int j=0; j<=min(a[0],a[2]); j++)
            {
                for (int k=0; k<=min(a[1],a[2]); k++)
                {
                    if ((a[0]-i-j)%2!=0 || a[0]<i+j)
                        continue;
                    if ((a[1]-i-k)%2!=0 || a[1]<i+k)
                        continue;
                    if ((a[2]-k-j)%2!=0 || a[2]<k+j)
                        continue;
                    ans=max(ans,i+j+k);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
