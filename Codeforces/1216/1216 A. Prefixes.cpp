#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i+=2)
    {
        if (s[i]==s[i+1])
        {
            c++;
            if (s[i]=='a')
                s[i+1]='b';
            else
                s[i+1]='a';
        }
    }
    cout<<c<<endl;
    cout<<s<<endl;
    return 0;
}
