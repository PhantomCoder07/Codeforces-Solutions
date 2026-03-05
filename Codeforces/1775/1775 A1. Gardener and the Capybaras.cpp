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
        cout<<s[0]<<' ';
        if (s[1]=='a')
        {
            cout<<s[1]<<' ';
            for (int i=2; i<s.length(); i++)
                cout<<s[i];
            cout<<endl;
        }
        else
        {
            for (int i=1; i<s.length()-1; i++)
                cout<<s[i];
            cout<<' '<<s[s.length()-1]<<endl;
        }
    }
    return 0;
}
