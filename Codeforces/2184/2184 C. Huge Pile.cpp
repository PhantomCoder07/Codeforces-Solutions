#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        if (n<k)
        {
            cout<<-1<<endl;
            continue;
        }
        if (n==k)
        {
            cout<<0<<endl;
            continue;
        }
        ll m=n,c=0,f=0;
        while (m>k)
        {
            ll a=m/2;
            ll b=m-a;
            if (k<=a)
                m=a;
            else if (k>=b)
                m=b;
            else
            {
                f=1;
                break;
            }
            c++;
        }
        if (f==0 && m==k)
            cout<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
