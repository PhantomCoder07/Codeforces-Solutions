#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int mn=1,mx=12;
        bool ansc=false,ansd=false;
        if (a>b)
            swap(a,b);
        if (c>d)
            swap(c,d);
        if (a==mn && b==mx)
            cout<<"NO"<<endl;
        else
        {
            for (int i=a+1; i<b; i++)
            {
                if (i==c)
                {
                    ansc=true;
                }
                if (i==d)
                {
                    ansd=true;
                }
            }
            if (ansc && ansd)
                cout<<"NO"<<endl;
            else if (ansc || ansd)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
