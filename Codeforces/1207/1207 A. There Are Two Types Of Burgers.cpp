#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;
        if (b<2)
            cout<<0<<endl;
        else if ((p+f)*2<=b)
            cout<<(p*h)+(f*c)<<endl;
        else
        {
            int ans=0;
            if (h>c)
            {
                for (int i=0; b>=2; i++)
                {
                    ans+=h;
                    b-=2;
                    p--;
                    if (p==0)
                        break;
                }
                if (b>=2)
                {
                    for (int i=0; b>=2; i++)
                    {
                        ans+=c;
                        b-=2;
                        f--;
                        if (f==0)
                            break;
                    }
                }
                cout<<ans<<endl;
            }
            else
            {
                for (int i=0; b>=2; i++)
                {
                    ans+=c;
                    b-=2;
                    f--;
                    if (f==0)
                        break;
                }
                if (b>=2)
                {
                    for (int i=0; b>=2; i++)
                    {
                        ans+=h;
                        b-=2;
                        p--;
                        if (p==0)
                            break;
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
