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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int mn=count(a.begin(),a.end(),a[0]);
        int mx=count(a.begin(),a.end(),a[n-1]);
        if (a[0]==a[n-1])
            cout<<(ll)n*(n-1)<<endl;
        else
            cout<<(ll)2*mn*mx<<endl;
    }
    return 0;
}
