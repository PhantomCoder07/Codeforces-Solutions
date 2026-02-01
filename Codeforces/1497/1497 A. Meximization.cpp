#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for (int i=0; i<n-1; i++)
            if (a[i]!=a[i+1])
                cout<<a[i]<<" ";
        cout<<a[n-1]<<" ";
        for (int i=0; i<n-1; i++)
            if (a[i]==a[i+1])
                cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
