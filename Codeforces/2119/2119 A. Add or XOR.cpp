#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b)
        {
            if(a-b>=2 || a%2==0)
            {
                cout<<-1<<endl;
            }
            else
                cout<<y<<endl;
        }
        else
        {
            int ans=0;
            while(a!=b)
            {
                if(a%2!=0)
                    ans+=x;
                else
                    ans+=min(x,y);
                a++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
