#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n);
        int sum=0,f=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        while (1)
        {
            if (sum==s)
                break;
            if (sum>s)
            {
                f=1;
                break;
            }
            sum+=x;
        }
        if (sum==s && f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
