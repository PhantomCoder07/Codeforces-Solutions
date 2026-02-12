#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,q,a,x,y;
        cin>>n>>q;
        ll sum=0,even=0,odd=0;
        for (int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
            if (a%2==0)
                even++;
            else
                odd++;
        }
        while (q--)
        {
            cin>>y>>x;
            if (y==0)
            {
                sum+=even*x;
                if (x%2!=0)
                {
                    odd+=even;
                    even=0;
                }
            }
            else
            {
                sum+=odd*x;
                if (x%2!=0)
                {
                    even+=odd;
                    odd=0;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
