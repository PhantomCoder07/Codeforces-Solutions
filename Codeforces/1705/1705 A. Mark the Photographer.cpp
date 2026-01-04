#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(2*n);
        for (int i=0; i<2*n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for (int i=0; i<n; i++)
        {
            if (a[n+i]-a[i]<x)
                ans=1;
        }
        if (ans==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
