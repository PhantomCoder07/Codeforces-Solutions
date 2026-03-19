#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<m; i++)
        cin>>b[i];
    for (int i=0; i<n; i++)
    {
        if (b[c]>=a[i])
        {
            c++;
            if (c==m)
                break;
        }
    }
    cout<<c<<endl;
    return 0;
}
