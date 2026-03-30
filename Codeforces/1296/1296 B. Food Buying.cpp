#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a=1000*1000*1000,ans=0;
        while (n>0)
        {
            while (n<a)
                a/=10;
            ans+=a;
            n-=a-a/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
