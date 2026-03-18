#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        string s,a;
        cin>>n>>m>>s;
        a=s;
        while (m--)
        {
            if (s[0]=='0')
            {
                if (s[1]=='1')
                    a[0]='1';
            }
            if (s[n-1]=='0')
            {
                if (s[n-2]=='1')
                    a[n-1]='1';
            }
            for (int i=1; i<n-1; i++)
            {
                if (s[i]=='0' && s[i+1]=='1' && s[i-1]=='0')
                    a[i]='1';
                if (s[i]=='0' && s[i-1]=='1' && s[i+1]=='0')
                    a[i]='1';
            }
            if (a==s)
                break;
            s=a;
        }
        cout<<a<<endl;
    }
    return 0;
}
