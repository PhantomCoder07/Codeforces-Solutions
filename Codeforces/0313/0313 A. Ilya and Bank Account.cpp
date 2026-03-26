#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s[0]!='-')
        cout<<s<<endl;
    else
    {
        int n=s.length();
        if (s[n-1]>=s[n-2])
            s.pop_back();
        else
        {
            char t=s[n-1];
            s.pop_back();
            s.pop_back();
            s+=t;
        }
        if (s.length()==2 && s[1]=='0')
            cout<<0<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
