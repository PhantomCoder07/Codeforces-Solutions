#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a=x|z;
        int b=x|y;
        int c=y|z;
        if ((a&b)==x && (b&c)==y && (c&a)==z)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
