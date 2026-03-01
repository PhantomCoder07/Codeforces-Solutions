#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int c0=count(s.begin(),s.end(),'0');
        if (c0==0)
        {
            cout<<0<<endl;
            continue;
        }
        int st=s.find('0');
        int ed=s.rfind('0');
        if (ed-st+1==c0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
