#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k,c=0;
        cin>>n>>k;
        if (k==1)
        {
            cout<<n<<endl;
            continue;
        }
        while (n>0)
        {
            c+=n%k;
            n/=k;
        }
        cout<<c<<endl;
    }
    return 0;
}
