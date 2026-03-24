#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ta=0,tb=0,mxa=0,mxb=0;
    while (n--)
    {
        int t,x,y;
        cin>>t>>x>>y;
        if (t==1)
        {
            mxa+=x;
            ta+=(x+y);
        }
        else
        {
            mxb+=x;
            tb+=(x+y);
        }
    }
    cout<<(2*mxa>=ta?"LIVE":"DEAD")<<endl;
    cout<<(2*mxb>=tb?"LIVE":"DEAD")<<endl;
    return 0;
}
