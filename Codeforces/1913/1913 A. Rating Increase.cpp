#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,a,b;
        cin>>s;
        a+=s[0];
        int i=1;
        while (s[i]=='0')
        {
            a+=s[i++];
        }
        if (i==s.size())
        {
            cout<<-1<<endl;
            continue;
        }
        while (s[i]!='\0')
        {
            b+=s[i++];
        }
        int c=stoi(a);
        int d=stoi(b);
        if (a==b || c>d)
            cout<<-1<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
    return 0;
}
