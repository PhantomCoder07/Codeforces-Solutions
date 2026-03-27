#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    string s;
    cin>>n>>s;
    char a,b;
    for (int i=0; i<n-1; i++)
    {
        int c=0;
        for (int j=0; j<n-1; j++)
        {
            if (s[i]==s[j] && s[i+1]==s[j+1])
                c++;
        }
        if (mx<c)
        {
            mx=c;
            a=s[i];
            b=s[i+1];
        }
    }
    cout<<a<<b<<endl;
    return 0;
}
