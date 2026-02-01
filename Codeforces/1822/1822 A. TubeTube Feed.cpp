#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n,t,c=-1,ans=-1;
        cin>>n>>t;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
            if(a[i]+i<=t)
            {
                if (b[i]>c)
                {
                    c=b[i];
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
