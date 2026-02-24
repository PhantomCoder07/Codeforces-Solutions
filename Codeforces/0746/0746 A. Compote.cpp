#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for (int i=1; ; i++)
    {
        if (i*1<=a && i*2<=b && i*4<=c)
            sum=(i*1)+(i*2)+(i*4);
        else
            break;
    }
    cout<<sum<<endl;
    return 0;
}
