#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        a*=(a<0)?(-1):1;
        b*=(b<0)?(-1):1;
        if (a==b)
            cout<<2*a<<endl;
        else
            cout<<2*max(a,b)-1<<endl;
    }
    return 0;
}
