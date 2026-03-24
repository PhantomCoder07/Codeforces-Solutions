#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    bool ans=true;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='.')
        {
            if (s[i-1]=='9')
            {
                ans=false;
                break;
            }
            if (s[i+1]>='5' && s[i+1]<='9')
                s[i-1]++;
        }
    }
    if (ans)
    {
        for (int i=0; i<n; i++)
        {
            if (s[i]=='.')
                break;
            cout<<s[i];
        }
    }
    else
        cout<<"GOTO Vasilisa."<<endl;
    return 0;
}
