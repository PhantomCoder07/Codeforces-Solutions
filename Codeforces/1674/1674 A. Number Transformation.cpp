#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int a,b;
        if (y%x==0)
            a=1,b=y/x;
        else
            a=0,b=0;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
