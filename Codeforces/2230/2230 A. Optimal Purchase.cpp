#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        cout<<min({n*a,((n/3)+1)*b,(n/3)*b+(n%3)*a})<<endl;
    }
    return 0;
}
