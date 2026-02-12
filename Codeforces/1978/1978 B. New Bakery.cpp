#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if (a>=b)
            cout<<n*a<<endl;
        else
        {
            long long k=min(n,max(0LL,b-a));
            cout<<k*(2*b-k+1)/2+(n-k)*a<<endl;
        }
    }
    return 0;
}
