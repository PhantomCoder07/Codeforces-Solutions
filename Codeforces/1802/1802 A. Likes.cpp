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
        vector<int> a(n),b(n),c(n);
        int l=0,d=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]>0)
                l++;
            else
                d++;
        }
        for (int i=1; i<=n; i++)
        {
            if (i<=l)
                cout<<i<<' ';
            else
                cout<<l*2-i<<' ';
        }
        cout<<endl;
        for (int i=1; i<=n; i++)
        {
            if (i<=d*2)
                cout<<i%2<<' ';
            else
                cout<<(i-d*2)<<' ';
        }
        cout<<endl;
    }
    return 0;
}
