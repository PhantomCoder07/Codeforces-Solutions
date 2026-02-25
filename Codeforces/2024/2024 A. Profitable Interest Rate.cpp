#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        if (a>=b)
            cout<<a<<endl;
        else if (2*a>b)
            cout<<a-max(0LL,b-a)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
