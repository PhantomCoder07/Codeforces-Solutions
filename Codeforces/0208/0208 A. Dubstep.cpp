#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    bool ans=false;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if (ans)
            {
                cout<<' ';
                ans=false;
            }
            i+=2;
        }
        else
        {
            cout<<s[i];
            ans=true;
        }
    }
    return 0;
}
