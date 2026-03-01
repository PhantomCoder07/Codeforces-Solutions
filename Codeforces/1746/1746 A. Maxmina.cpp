#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int c=count(a.begin(),a.end(),1);
        if (c!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
