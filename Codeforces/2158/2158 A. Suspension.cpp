#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,y,r;
        cin>>n>>y>>r;
        int ans=(y/2)+r;
        if (ans>n)
            cout<<n<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
