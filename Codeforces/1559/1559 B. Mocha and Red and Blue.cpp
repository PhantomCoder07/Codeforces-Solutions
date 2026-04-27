#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j=-1;
        string s;
        cin>>n>>s;
        for (int i=0; i<n; i++)
        {
            if (s[i]!='?')
            {
                j=i;
                break;
            }
        }
        if (j%2)
        {
            if (s[j]=='R')
                s[0]='B';
            else
                s[0]='R';
        }
        else if (j%2==0)
        {
            if (s[j]=='R')
                s[0]='R';
            else
                s[0]='B';
        }
        else if (j==-1)
        {
            for (int i=0; i<n; i++)
            {
                if (i%2)
                    cout<<'R';
                else
                    cout<<'B';
            }
            cout<<endl;
            continue;
        }
        for (int i=0; i<n; i++)
        {
            if (s[i]=='?')
            {
                if (s[i+1]=='R')
                    s[i]='B';
                else if (s[i+1]=='B')
                    s[i]='R';
                else
                {
                    if (s[i-1]=='R')
                        s[i]='B';
                    else
                        s[i]='R';
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
