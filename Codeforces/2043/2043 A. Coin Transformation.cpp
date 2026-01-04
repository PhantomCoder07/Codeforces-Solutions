#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m=1;
        cin>>n;
        while (n>3)
        {
            m*=2;
            n/=4;
        }
        cout<<m<<endl;
    }
    return 0;
}
