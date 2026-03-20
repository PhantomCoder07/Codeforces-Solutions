#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    t=s;
    reverse(t.begin(),t.end());
    if (s==t)
        cout<<s<<endl;
    else
        cout<<s.substr(0,s.length()-1)<<t<<endl;
    return 0;
}
