#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if (n<=2*k)
            cout<<-1<<endl;
        else
        {
            int l=1,r=n-k+1;
            while(l<=n-k)
            {
                cout<<l<<' ';
                if(r<=n)
                    cout<<r<<' ';
                l++,r++;
            }
            cout<<endl;
        }
    }
    return 0;
}
