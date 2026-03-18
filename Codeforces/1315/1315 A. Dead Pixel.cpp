#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        cout<<max(b*max(x,(a-1-x)),a*max(y,(b-1-y)))<<endl;
    }
    return 0;
}
