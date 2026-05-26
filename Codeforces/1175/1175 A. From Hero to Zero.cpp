#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k,c=0;
        cin>>n>>k;
        while (n)
        {
            if (n%k==0)
            {
                n/=k;
                c++;
            }
            else
            {
                ll r=n%k;
                c+=r;
                n-=r;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
