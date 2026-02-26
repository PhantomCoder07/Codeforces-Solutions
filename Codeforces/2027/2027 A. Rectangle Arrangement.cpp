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
        int mxw=0,mxh=0;
        while (n--)
        {
            int w,h;
            cin>>w>>h;
            mxw=max(mxw,w);
            mxh=max(mxh,h);
        }
        cout<<2*(mxw+mxh)<<endl;
    }
    return 0;
}
