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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        bool ans=false;
        for (int i=0; i<n; i++)
        {
            if (a[i]==0)
                c++;
            else if (a[i]>=2)
                ans=true;
        }
        if (c<=(n+1)/2)
            cout<<0<<endl;
        else if (ans || c==n)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
