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
        int m=min(x,y);
        cout<<"0 0 "<<m<<' '<<m<<endl;
        cout<<0<<' '<<m<<' '<<m<<' '<<0<<endl;
    }
    return 0;
}
