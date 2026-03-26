#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll ans=(n+1)/2;
    if (k<=ans)
        cout<<2*k-1<<endl;
    else
        cout<<2*(k-ans)<<endl;
    return 0;
}
