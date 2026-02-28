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
        int sum=0,ans=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]==0)
            {
                a[i]=1;
                ans++;
            }
            sum+=a[i];
        }
        if (sum==0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
