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
        int l,r,c=0;
        for (int i=0; i<n; i++)
            if (a[i]==1)
            {
                l=i;
                break;
            }
        for (int i=n-1; i>=0; i--)
            if (a[i]==1)
            {
                r=i;
                break;
            }
        for (int i=l; i<=r; i++)
            if (a[i]==0)
                c++;
        cout<<c<<endl;
    }
    return 0;
}
