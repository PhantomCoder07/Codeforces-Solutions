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
        vector<int> a(n),b(n+1,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        sort(b.rbegin(),b.rend());
        int ans=0;
        for (int i=0; i<=n; i++)
            ans=max(ans,b[i]*(i+1));
        cout<<ans<<endl;
    }
    return 0;
}
