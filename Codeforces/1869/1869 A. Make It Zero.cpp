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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        if (a[0]==a[n-1] && a[0]==0)
        {
            cout<<0<<endl;
            continue;
        }
        int sum=a[0];
        for (int i=1; i<n; i++)
            sum^=a[i];
        if (sum==0)
        {
            cout<<1<<endl;
            cout<<1<<' '<<n<<endl;
        }
        else
        {
            if (n%2)
            {
                cout<<4<<endl;
                cout<<1<<' '<<2<<endl;
                cout<<1<<' '<<2<<endl;
                cout<<2<<' '<<n<<endl;
                cout<<2<<' '<<n<<endl;
            }
            else
            {
                cout<<2<<endl;
                cout<<1<<' '<<n<<endl;
                cout<<1<<' '<<n<<endl;
            }
        }
    }
    return 0;
}
