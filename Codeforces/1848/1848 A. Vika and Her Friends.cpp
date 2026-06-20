#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k,x,y;
        cin>>n>>m>>k>>x>>y;
        bool ans=true;
        while (k--)
        {
            int a,b;
            cin>>a>>b;
            if ((a+b)%2==(x+y)%2)
                ans=false;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
