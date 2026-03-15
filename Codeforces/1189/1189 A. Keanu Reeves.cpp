#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c0=count(s.begin(),s.end(),'0');
    int c1=count(s.begin(),s.end(),'1');
    if (c0==c1)
    {
        cout<<2<<endl;
        for (int i=0; i<n-1; i++)
            cout<<s[i];
        cout<<' '<<s[n-1];
    }
    else
    {
        cout<<1<<endl;
        cout<<s<<endl;
    }
    return 0;
}
