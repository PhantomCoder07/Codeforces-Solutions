#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,a="aeiou";
    cin>>s;
    int n=s.length();
    bool ans=true;
    for (int i=0; i<n-1; i++)
    {
        if (a.find(s[i])==std::string::npos && a.find(s[i+1])==std::string::npos && s[i]!='n')
        {
            ans=false;
            break;
        }
    }
    if (a.find(s[n-1])==std::string::npos && s[n-1]!='n')
        ans=false;
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
