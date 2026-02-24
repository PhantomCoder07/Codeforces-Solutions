#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,h,c=0;
        cin>>n>>h;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        cout<<h/(a[0]+a[1])*2+(h%(a[0]+a[1])+a[0]-1)/a[0]<<endl;
    }
    return 0;
}
