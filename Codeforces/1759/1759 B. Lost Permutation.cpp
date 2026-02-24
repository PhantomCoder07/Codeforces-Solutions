#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0,mx=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            mx=max(mx,a[i]);
        }
        bool f=false;
        for (int i=1; i<=200; i++)
        {
            int d=i*(i+1)/2;
            if (d<sum)
                continue;
            if (d-sum==s && mx<=i)
            {
                f=true;
                break;
            }
            if (d-sum>s)
                break;
        }
        if (f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
