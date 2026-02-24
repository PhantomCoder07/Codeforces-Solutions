#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll wa=(a-p%a)%a;
        ll wb=(b-p%b)%b;
        ll wc=(c-p%c)%c;
        cout<<min({wa,wb,wc})<<endl;
    }
    return 0;
}
