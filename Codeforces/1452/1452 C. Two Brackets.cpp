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
        int ans=0;
        int n=0,m=0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='(')
                n++;
            else if (s[i]=='[')
                m++;
            else if (s[i]==')' && n>0)
            {
                n--;
                ans++;
            }
            else if (s[i]==']' && m>0)
            {
                m--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
