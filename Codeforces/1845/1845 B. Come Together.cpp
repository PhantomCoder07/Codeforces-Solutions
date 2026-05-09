#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int d1=abs(x1-x2)+abs(y1-y2);
        int d2=abs(x2-x3)+abs(y2-y3);
        int d3=abs(x1-x3)+abs(y1-y3);
        cout<<((d1+d3-d2)/2)+1<<endl;
    }
    return 0;
}
