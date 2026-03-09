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
        if (a==0 || b==0)
            cout<<0<<endl;
        else if (a==0)
        {
            cout<<1<<endl;
            cout<<a<<' '<<b<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<a-1<<' '<<1<<endl;
            cout<<a<<' '<<b<<endl;
        }
    }
    return 0;
}
