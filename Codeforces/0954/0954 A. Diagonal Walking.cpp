#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='R' && s[i+1]=='U')
        {
            c++;
            i++;
        }
        else if (s[i]=='U' && s[i+1]=='R')
        {
            c++;
            i++;
        }
        else
            c++;
    }
    cout<<c<<endl;
    return 0;
}
