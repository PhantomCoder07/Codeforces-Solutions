#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if (a<b)
            swap(a,b);
        int x=0,y=0,c=0,l=1;
        while (1)
        {
            int t=x;
            x=y+l;
            y=t;
            if (x<=a && y<=b)
            {
                c++;
                l*=2;
            }
            else
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
