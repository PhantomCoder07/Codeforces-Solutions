#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,ans=1;
        cin>>n;
        for (long long i=3; i<=2*n; i++)
            ans=(ans*i)%1000000007;
        cout<<ans<<endl;
    }
    return 0;
}
