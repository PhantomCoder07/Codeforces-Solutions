#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.rbegin(),s.rend());
    for (int i=0; i<s.length(); i++)
    {
        cout<<s[i];
        if (s[i]!=s[i+1])
            break;
    }
    return 0;
}
