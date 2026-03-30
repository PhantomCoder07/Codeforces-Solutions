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
        long long c=1,sum=n*(n+1)/2;
        while (c<=n)
        {
            sum-=c*2;
            c*=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
