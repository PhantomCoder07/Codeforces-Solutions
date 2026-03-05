#include <bits/stdc++.h>
using namespace std;
int search_i (vector<int> &a, int n, int t)
{
    for (int i=0; i<n; i++)
        if (a[i]==t)
            return i+1;
    return 0;
}
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
        int mx=*max_element(a.begin(),a.end());
        int mn=*min_element(a.begin(),a.end());
        int mxi=search_i(a,n,mx);
        int mni=search_i(a,n,mn);
        cout<<mxi<<' '<<mni<<endl;
    }
    return 0;
}
