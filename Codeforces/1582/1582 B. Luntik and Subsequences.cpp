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
        int c0=count(a.begin(),a.end(),0);
        int c1=count(a.begin(),a.end(),1);
        cout<<(1LL<<c0)*(long long)c1<<endl;
    }
    return 0;
}
