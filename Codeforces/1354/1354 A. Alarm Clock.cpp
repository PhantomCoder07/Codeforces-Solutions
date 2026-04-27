#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a<=b)
            cout<<b<<endl;
        else if (a>b && c<=d)
            cout<<-1<<endl;
        else
        {
            a-=b;
            ll e=c-d,f=0;
            if (a%e==0)
                cout<<b+(c*(a/e))<<endl;
            else
                cout<<b+(c*((a/e)+1))<<endl;
        }
    }
    return 0;
}
