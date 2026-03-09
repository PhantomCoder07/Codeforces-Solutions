#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,q;
        string s;
        cin>>n>>a>>q>>s;
        if (a==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int b=a,c=0;
        bool ans=false;
        for (int i=0; i<q; i++)
        {
            if (s[i]=='+')
            {
                b++;
                c++;
            }
            else
                b--;
            if (b==n)
            {
                ans=true;
                break;
            }
        }
        if (ans)
            cout<<"YES"<<endl;
        else if (a+c<n)
            cout<<"NO"<<endl;
        else
            cout<<"MAYBE"<<endl;
    }
    return 0;
}
