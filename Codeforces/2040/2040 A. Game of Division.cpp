#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int ans=0;
        bool f=true;
        for (int i=0; i<n; i++)
        {
            f=true;
            for (int j=0; j<n; j++)
            {
                if (abs(a[i]-a[j])%k==0 && i!=j)
                    f=false;
            }
            if (f)
                ans=i+1;
        }
        if (ans)
            cout<<"YES\n"<<ans<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
