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
        for (int i=0; s[i]!='\0'; i++)
        {
            if (s[i]=='F' && s[i+1]=='F' && s[i+2]=='T')
            {
                sort(s.begin(),s.end());
                reverse(s.begin(),s.end());
                break;
            }
            else if (s[i]=='N' && s[i+1]=='T' && s[i+2]=='T')
            {
                sort(s.begin(),s.end());
                reverse(s.begin(),s.end());
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
