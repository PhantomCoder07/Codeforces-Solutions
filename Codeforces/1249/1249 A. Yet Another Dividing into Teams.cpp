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
        sort(a.begin(),a.end());
        bool f=true;
        for (int i=0; i<n-1; i++)
            if(a[i+1]-a[i]==1)
                f=false;
        if (f)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
