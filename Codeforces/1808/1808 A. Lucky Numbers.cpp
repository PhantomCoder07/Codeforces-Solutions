#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        int p=-1,q=0;
        for (int i=l; i<=r; i++)
        {
            int c=i,u=0,v=9;
            while(c)
            {
                u=max(u,c%10);
                v=min(v,c%10);
                c/=10;
            }
            if (u-v>p)
            {
                p=u-v;
                q=i;
            }
            if (p==9)
                break;
        }
        cout<<q<<endl;
    }
    return 0;
}
