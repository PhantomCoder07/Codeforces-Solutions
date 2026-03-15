#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    int oa=0,ea=0,ob=0,eb=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]%2)
            oa++;
        else
            ea++;
    }
    for (int i=0; i<m; i++)
    {
        cin>>b[i];
        if (b[i]%2)
            ob++;
        else
            eb++;
    }
    int ans=min(oa,eb)+min(ea,ob);
    cout<<ans<<endl;
    return 0;
}
