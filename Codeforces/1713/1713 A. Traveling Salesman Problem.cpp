#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int maxx=0,maxy=0,minx=0,miny=0;
        while (n--)
        {
            int x,y;
            cin>>x>>y;
            maxx=max(maxx,x);
            minx=min(minx,x);
            maxy=max(maxy,y);
            miny=min(miny,y);
        }
        cout<<2*(maxx+maxy-minx-miny)<<endl;
    }
    return 0;
}
