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
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if (a[0]%2==a[n-1]%2)
            cout<<"0"<<endl;
        else
        {
            int l=n,r=n;
            for (int i=1; i<n; i++)
            {
                if (a[i]%2!=a[0]%2)
                {
                    l=i;
                    break;
                }
            }
            for (int i=1; i<n; i++)
            {
                if (a[n-i-1]%2!=a[n-1]%2)
                {
                    r=i;
                    break;
                }
            }
            cout<<min(l,r)<<endl;
        }
    }
    return 0;
}
