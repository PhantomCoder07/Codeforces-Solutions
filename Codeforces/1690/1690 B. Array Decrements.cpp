#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0,r=0;
        cin>>n;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
            r=max(r,a[i]-b[i]);
        }
        for (int i=0; i<n; i++)
        {
            if ((a[i]-r<b[i] && b[i]!=0) || b[i]>a[i])
            {
                f=1;
                break;
            }
        }
        if (f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
