#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        cin>>n;
        vector<int> a(n),b;
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=n-1; i>=0; i--)
        {
            m=max(m,a[i]);
            if (m>0)
            {
                b.push_back(1);
                m--;
            }
            else
                b.push_back(0);
        }
        reverse(b.begin(),b.end());
        for (int i=0; i<n; i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}
