#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long s,a,b,c;
        cin>>s>>a>>b>>c;
        cout<<a*((s/c)/a)+((s/c)/a)*b+((s/c)-a*((s/c)/a))<<endl;
    }
    return 0;
}
