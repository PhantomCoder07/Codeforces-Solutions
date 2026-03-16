#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    char ch;
    for (int i=0; i<s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            ch=tolower(s[i]);
            break;
        }
    }
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
