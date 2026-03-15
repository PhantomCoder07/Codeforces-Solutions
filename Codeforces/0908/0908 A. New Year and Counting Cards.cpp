#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length(),c=0;
    for (int i=0; i<n; i++)
    {
        if (isalpha(s[i]) && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
            c++;
        else if (isdigit(s[i]) && (s[i]-'0')%2==1)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
