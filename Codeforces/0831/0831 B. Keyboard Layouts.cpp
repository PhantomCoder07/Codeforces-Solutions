#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,t;
    cin>>s1>>s2>>t;
    int n=t.length();
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<26; j++)
        {
            if (isalpha(t[i]))
            {
                if (isupper(t[i]))
                {
                    if (tolower(t[i])==s1[j])
                        cout<<(char)toupper(s2[j]);
                }
                else
                {
                    if (t[i]==s1[j])
                        cout<<s2[j];
                }
            }
        }
        if (isdigit(t[i]))
            cout<<t[i];
    }
    return 0;
}
