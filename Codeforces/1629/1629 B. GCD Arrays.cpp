#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        if ((r-l+1)-(r/2-(l-1)/2)<=k)
            cout<<"YES"<<endl;
        else if (l==r && l!=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
