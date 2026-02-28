#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    string s,a="0000000000";
    cin>>n>>s;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='L')
            a[a.find('0')]='1';
        if(s[i]=='R')
            a[a.rfind('0')]='1';
        else
            a[s[i]-'0']='0';
    }
    cout<<a;
    return 0;
}
