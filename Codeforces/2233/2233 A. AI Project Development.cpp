#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        cout<<min((n+x+y-1)/(x+y),(n-x*z+x+10*y-1)/(x+10*y)+z)<<endl;
    }
    return 0;
}
