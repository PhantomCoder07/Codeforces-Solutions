#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long> a(n),b(m);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        for (int i=0; i<m; i++)
        {
            char c;
            int l,r;
            cin>>c>>l>>r;
            if (c=='+' && (mx>=l && mx<=r))
                mx++;
            else if (c=='-' && (mx>=l && mx<=r))
                mx--;
            b[i]=mx;
        }
        for (int i=0; i<m; i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}
