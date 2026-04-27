#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c1=0,c2=0;
        string s;
        cin>>n>>s;
        for (int i=1; i<n-1; i++)
            if (s[i-1]=='1' && s[i+1]=='1')
                s[i]='1';
        for (int i=0; i<n; i++)
            if (s[i]=='1')
                c1++;
        for (int i=1; i<n-1; i++)
            if (s[i-1]=='1' && s[i+1]=='1')
                s[i]='0';
        for (int i=1; i<n-1; i++)
            if (s[i-1]=='1' && s[i+1]=='1')
                s[i] = '0';
        for (int i=0; i<n; i++)
            if (s[i]=='1')
                c2++;
        cout<<c2<<' '<<c1<<endl;
    }
    return 0;
}
