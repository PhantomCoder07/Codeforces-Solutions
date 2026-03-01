#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if (sum==x)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for (int i=0; i<n; i++)
            {
                if (x==a[i])
                    swap(a[i],a[i+1]);
                cout<<a[i]<<' ';
                x-=a[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
