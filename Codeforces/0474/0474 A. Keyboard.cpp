#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string s;
    cin>>ch>>s;
    string t="qwertyuiopasdfghjkl;zxcvbnm,./";
    int n=s.length();
    if (ch=='R')
    {
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<t.length(); j++)
            {
                if (s[i]==t[j])
                {
                    cout<<t[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<t.length(); j++)
            {
                if (s[i]==t[j])
                {
                    cout<<t[j+1];
                    break;
                }
            }
        }
    }
    return 0;
}
