#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n%2==1)
        {
            cout<<0<<endl;
            continue;
        }
        long long ans=1;
        for (int i=1; i<=n/2; i++)
        {
            ans*=1LL*i*i%MOD;
            ans%=MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}
