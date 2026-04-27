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
        ll sum=accumulate(a.begin(),a.end(),0LL);
        ll c=sum%n;
        cout<<c*(n-c)<<endl;
    }
    return 0;
}
