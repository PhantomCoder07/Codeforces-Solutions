#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    int n=s.length();
    for (int i=n-1; i>=0; i--)
    {
        t="--|OOOOO";
        if (s[i]<'5')
        {
            t[0]='O';
            t[3+s[i]-'0']='-';
        }
        else
        {
            t[1]='O';
            t[3+s[i]-'5']='-';
        }
        cout<<t<<endl;
    }
    return 0;
}
