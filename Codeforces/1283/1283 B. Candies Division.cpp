#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=n/k;
        cout<<(k*ans)+min(k/2,n%k)<<endl;
    }
    return 0;
}
