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
        int suma=0,sumb=0,ans=0;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        for (int i=0; i<n; i++)
        {
            ans+=(a[i]^b[i]);
        }
        ans=min(ans,1+abs(suma-sumb));
        cout<<ans<<endl;
    }
    return 0;
}
