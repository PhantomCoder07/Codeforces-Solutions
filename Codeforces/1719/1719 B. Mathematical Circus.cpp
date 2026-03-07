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
        k%=4;
        if (k==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for (int i=1; i<=n; i+=2)
        {
            if (k==2 && i%4!=3)
                cout<<i+1<<' '<<i<<endl;
            else
                cout<<i<<' '<<i+1<<endl;
        }
    }
    return 0;
}
