#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if (x>a)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    a-=x;
    int sum=a+b;
    if (y>sum)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sum-=y;
    if (z>sum+c)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
