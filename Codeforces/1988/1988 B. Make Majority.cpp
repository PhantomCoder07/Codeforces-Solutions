#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j;
        string s,a;
        cin>>n>>s;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
                a+=s[i];
            else
            {
                for (j=i; j<n; j++)
                {
                    if (s[j]=='1')
                        break;
                }
                i=j-1;
                a+='0';
            }
        }
        int c0=count(a.begin(),a.end(),'0');
        int c1=count(a.begin(),a.end(),'1');
        if (c0>=c1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
