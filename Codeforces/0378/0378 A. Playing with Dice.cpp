#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,z;
    cin>>a>>b;
    x=y=z=0;
    for (int i=1; i<=6; i++)
    {
        if (abs(i-a)<abs(i-b))
            x++;
        else if (abs(i-a)>abs(i-b))
            y++;
        else
            z++;
    }
    cout<<x<<" "<<z<<" "<<y<<endl;
    return 0;
}
