#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    if (l+a<=r)
        cout<<2*(l+a)<<endl;
    else if (r+a<=l)
        cout<<2*(r+a)<<endl;
    else if (a==0)
        cout<<2*min(l,r)<<endl;
    else if (l==r)
        cout<<2*(l+(a/2))<<endl;
    else
        cout<<2*(max(l,r)+(a-(max(l,r)-min(l,r)))/2)<<endl;
    return 0;
}
