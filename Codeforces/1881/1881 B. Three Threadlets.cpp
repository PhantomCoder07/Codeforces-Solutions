#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        int x=min({a,b,c});
        int z=max({a,b,c});
        int y=a+b+c-x-z;
        if (a==b && a==c)
            cout<<"YES"<<endl;
        else if (y%x==0 && z%x==0 && ((y/x)-1)+((z/x)-1)<=3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
