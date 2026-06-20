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
        int mx=-1,mn=105;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]==-1)
                continue;
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        if (mx<0 || (mx==mn && mn!=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
