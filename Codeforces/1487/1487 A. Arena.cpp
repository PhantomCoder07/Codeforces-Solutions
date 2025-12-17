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
        int mini=INT_MAX;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        int m=n;
        for (int i=0; i<n; i++)
        {
            if (mini==a[i])
                m--;
        }
        cout<<m<<endl;
    }
    return 0;
}
