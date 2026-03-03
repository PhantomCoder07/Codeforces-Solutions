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
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        for (int i=0; i<n; i++)
            if (a[i]<b[i])
                swap(a[i],b[i]);
        int mxa=*max_element(a.begin(),a.end());
        int mxb=*max_element(b.begin(),b.end());
        if (a[n-1]==mxa && b[n-1]==mxb)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
