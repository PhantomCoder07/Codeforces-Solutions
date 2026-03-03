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
        bool ans=true;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]<0)
                ans=false;
        }
        if (!ans)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int mx=*max_element(a.begin(),a.end());
        cout<<mx+1<<endl;
        for (int i=0; i<=mx; i++)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
