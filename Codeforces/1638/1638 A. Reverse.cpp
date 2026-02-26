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
        vector<int> a(n+1),p(n+1);
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            p[a[i]]=i;
        }
        for (int i=1; i<=n; i++)
        {
            if (a[i]!=i)
            {
                reverse(a.begin()+i,a.begin()+p[i]+1);
                break;
            }
        }
        for (int i=1; i<=n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
