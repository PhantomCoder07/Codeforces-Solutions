#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long c=__gcd(a,b);
        cout<<(a/c<=k && b/c<=k?1:2)<<endl;
    }
    return 0;
}
