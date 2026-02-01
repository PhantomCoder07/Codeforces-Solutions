#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll c=(n/15)*3;
        c+=min((n%15)+1,3LL);
        cout<<c<<endl;
    }
    return 0;
}
