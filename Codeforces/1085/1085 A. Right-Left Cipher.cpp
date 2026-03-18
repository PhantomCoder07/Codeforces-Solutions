#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=(s.length()-1)/2,r=l+1;
    while (r<s.length())
    {
        cout<<s[l--]<<s[r++];
    }
    if (s.length()%2)
        cout<<s[0];
    return 0;
}
