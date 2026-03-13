#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if (abs(x-y)<=z && z!=0)
        cout<<'?'<<endl;
    else if (x<y)
        cout<<'-'<<endl;
    else if (x>y)
        cout<<'+'<<endl;
    else
        cout<<0<<endl;
    return 0;
}
