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
        cout<<max(6LL,n+1)/2*5<<endl;
    }
    return 0;
}
