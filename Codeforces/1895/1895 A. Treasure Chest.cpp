#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if (x>y)
            cout<<x<<endl;
        else if (y-x-k>0)
            cout<<y+y-(x+k)<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}
