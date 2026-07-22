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
        int sum=accumulate(a.begin(),a.end(),0);
        if (sum==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if (sum>0)
            sort(a.rbegin(),a.rend());
        else
            sort(a.begin(),a.end());
        for (int x : a)
            cout<<x<<' ';
        cout<<endl;
    }
    return 0;
}
