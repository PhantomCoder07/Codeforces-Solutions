#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> a(n);
        a[0]=x,a[n-1]=y;
        int m=1;
        for (int i=n-2; i>=1; i--)
        {
            a[i]=a[i+1]-m;
            m++;
        }
        bool ans=true;
        for (int i=0; i<n-1; i++)
            if (a[i]>=a[i+1])
                ans=false;
        for (int i=0; i<n-2; i++)
        {
            int c=a[i+1]-a[i];
            int d=a[i+2]-a[i+1];
            if (c<=d)
                ans=false;
        }
        if (ans)
        {
            for (int i=0; i<n; i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
