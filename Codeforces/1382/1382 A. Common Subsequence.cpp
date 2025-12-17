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
        vector<int> a(n),b(m);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        int f=0,ans;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (a[i]==b[j])
                {
                    ans=a[i];
                    f=1;
                    break;
                }
            }
            if (f==1)
                break;
        }
        if (f==1)
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
