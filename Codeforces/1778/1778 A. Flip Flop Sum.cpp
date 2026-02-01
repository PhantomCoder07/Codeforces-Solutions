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
        int sum=0,c=0,ans=INT_MIN;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for (int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                if(a[i]==1)
                    ans=max(ans,sum-4);
                else
                    ans=max(ans,sum+4);
            }
            else
                ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}
