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
        for (int i=0; i<n; i++)
            cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        int mn=*min_element(a.begin(),a.end());
        int mid=ceil((mx+mn)/2);
        cout<<max(mid-mn,mx-mid)<<endl;
    }
    return 0;
}
