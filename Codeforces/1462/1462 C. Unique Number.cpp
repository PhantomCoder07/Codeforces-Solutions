#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n>=46)
        {
            cout<<-1<<endl;
            continue;
        }
        int d=9,ans=0,c=1;
        while (n>0)
        {
            if (d>n)
                d=n;
            ans+=d*c;
            c*=10;
            n-=d;
            d--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
