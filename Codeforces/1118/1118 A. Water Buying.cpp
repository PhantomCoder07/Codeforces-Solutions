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
        long long ans=0;
        if (n%2==1)
        {
            ans+=a;
            n--;
        }
        if (a>(b*1.0/2))
        {
            ans+=((n/2)*b);
        }
        else
        {
            ans+=(n*a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
