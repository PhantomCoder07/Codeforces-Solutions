#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long fact (int n)
{
    long long a=1;
    for (int i=1; i<=n; i++)
        a=(a*i)%mod;
    return a;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<(((1LL*n*(n-1))%mod)*fact(n))%mod<<endl;
    }
    return 0;
}
