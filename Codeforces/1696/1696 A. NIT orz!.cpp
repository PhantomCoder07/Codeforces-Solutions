#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,z,mx=0;
        cin>>n>>z;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]|z);
        }
        cout<<mx<<endl;
    }
    return 0;
}
