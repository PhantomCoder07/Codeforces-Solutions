#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (b==0)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        if (c%2)
            c--;
        if ((c/2)<=b)
        {
            ans+=(c+(c/2));
            b-=(c/2);
        }
        else
        {
            cout<<b+(b*2)<<endl;
            continue;
        }
        if (b%2)
            b--;
        if ((b/2)<=a)
        {
            ans+=(b+(b/2));
            cout<<ans<<endl;
        }
        else
        {
            ans+=(a+(a*2));
            cout<<ans<<endl;
        }
    }
    return 0;
}
