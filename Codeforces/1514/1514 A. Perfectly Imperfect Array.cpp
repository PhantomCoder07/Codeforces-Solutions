#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,a,c=0;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a;
            ll b=sqrt(a);
            if (b*b==a)
                c++;
        }
        if (c==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
