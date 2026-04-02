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
        vector<int> a(n*n),b(2*n+1,0),c;
        for (int i=0; i<n*n; i++)
        {
            cin>>a[i];
            if (b[a[i]]==0)
                c.push_back(a[i]);
            b[a[i]]++;
        }
        for (int i=1; i<=2*n; i++)
        {
            if (b[i]==0)
            {
                cout<<i<<' ';
                break;
            }
        }
        for (auto i: c)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
