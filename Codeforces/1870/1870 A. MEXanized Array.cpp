#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if (min(n,x+1)<k)
            cout<<-1<<endl;
        else
        {
            if (k!=x)
                cout<<k*(k-1)/2+(n-k)*x<<endl;
            else
                cout<<k*(k-1)/2+(n-k)*(k-1)<<endl;
        }
    }
    return 0;
}
