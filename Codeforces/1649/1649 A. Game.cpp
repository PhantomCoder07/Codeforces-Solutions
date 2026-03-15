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
        vector<int> a(n+1);
        for (int i=1; i<=n; i++)
            cin>>a[i];
        int l=1,r=n;
        while (l<r && a[l+1])
            l++;
        while (r>l && a[r-1])
            r--;
        cout<<r-l<<endl;
    }
    return 0;
}
