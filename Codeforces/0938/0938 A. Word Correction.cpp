#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
            c++;
        else
        {
            cout<<s[i];
            c=0;
        }
        if (c<=1 && c!=0)
            cout<<s[i];
    }
    return 0;
}
