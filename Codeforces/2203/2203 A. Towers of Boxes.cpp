#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,d;
        cin>>n>>m>>d;
        int c=d/m+1;
        int ans=(n+c-1)/c;
        cout<<ans<<endl;
    }
    return 0;
}
