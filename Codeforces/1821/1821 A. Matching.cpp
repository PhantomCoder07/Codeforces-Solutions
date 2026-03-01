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
        int ans=1;
        if (s[0]=='0')
            ans=0;
        if (s[0]=='?')
            ans=9;
        for (int i=1; i<s.length(); i++)
            if (s[i]=='?')
                ans*=10;
        cout<<ans<<endl;
    }
    return 0;
}
