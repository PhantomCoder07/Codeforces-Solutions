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
        bool u=true,d=true,l=true,r=true;
        while (n--)
        {
            int x,y;
            cin>>x>>y;
            if (x<0)
                l=false;
            if (x>0)
                r=false;
            if (y>0)
                d=false;
            if (y<0)
                u=false;
        }
        if (!l && !r && !u && !d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
