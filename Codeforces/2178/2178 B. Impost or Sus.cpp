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
        s='u'+s+'u';
        int n=s.length(),c=0;
        for (int i=1; i<n; i++)
        {
            if (s[i-1]=='u' && s[i]=='u')
            {
                s[i]='s';
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
