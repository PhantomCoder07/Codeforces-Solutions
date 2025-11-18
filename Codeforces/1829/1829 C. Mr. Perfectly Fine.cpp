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
        int a=-1,b=-1,c=-1;
        while (n--)
        {
            int m;
            string s;
            cin>>m>>s;
            if (s=="10")
            {
                if (a==-1 || m<a)
                    a=m;
            }
            else if (s=="01")
            {
                if (b==-1 || m<b)
                    b=m;
            }
            else if (s=="11")
            {
                if (c==-1 || m<c)
                    c=m;
            }
        }
        int ans=-1;
        if (c!=-1)
            ans=c;
        if (a!=-1 && b!=-1)
        {
            int d=a+b;
            if (ans==-1 || d<ans)
                ans=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
