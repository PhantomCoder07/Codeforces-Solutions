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
        int n=s.length();
        int c=0;
        if (s[0]=='_')
            c++;
        if (s[n-1]=='_')
            c++;
        if (n==1 && s[0]=='^')
            c++;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='_' && s[i+1]=='_')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
