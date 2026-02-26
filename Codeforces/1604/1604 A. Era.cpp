#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,mx=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]-(i+1));
        }
        cout<<mx<<endl;
    }
    return 0;
}
