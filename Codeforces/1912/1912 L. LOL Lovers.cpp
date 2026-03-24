#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c=count(s.begin(),s.end(),s[n-1])-1;
    if (c!=1)
        cout<<n-1;
    else if (s[0]==s[1] && n==4)
        cout<<2;
    else if (s[0]!=s[n-1] && n!=4)
        cout<<1;
    else
        cout<<-1;
    return 0;
}
