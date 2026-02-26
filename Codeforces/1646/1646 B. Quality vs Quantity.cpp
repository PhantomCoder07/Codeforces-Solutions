#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        ll sumb=a[0];
        ll sumr=0;
        int l=1,r=n-1;
        bool ans=false;
        while (l<=r)
        {
            sumb+=a[l];
            sumr+=a[r];
            if (sumb<sumr)
                ans=true;
            l++;
            r--;
        }
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
