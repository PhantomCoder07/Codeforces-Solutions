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
        n--;
        for (long long i=2; i<n; i++)
        {
            if (__gcd(i,n-i)==1)
            {
                cout<<i<<' '<<n-i<<' '<<1<<endl;
                break;
            }
        }
    }
    return 0;
}
