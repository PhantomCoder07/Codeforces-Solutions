#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,c=0;
        cin>>x>>y;
        int d=(x*x)+(y*y);
        while (c*c<d)
            c++;
        if (x==0 && y==0)
            cout<<0<<endl;
        else if (c*c==d)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
