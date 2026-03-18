#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,u2,d1,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    while (h)
    {
        w+=h;
        if (d1==h)
        {
            if (w>u1)
                w-=u1;
            else
                w=0;
        }
        if (d2==h)
        {
            if (w>u2)
                w-=u2;
            else
                w=0;
        }
        h--;
    }
    cout<<(w<0?0:w)<<endl;
    return 0;
}
