#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        for (int i=0; i<n-k; i++)
        {
            if (s[i]=='1')
            {
                s[i]='0';
                if (s[i+k]=='1')
                    s[i+k]='0';
                else
                    s[i+k]='1';
            }
        }
        int c=count(s.begin(),s.end(),'1');
        cout<<(c==0?"YES":"NO")<<endl;
    }
    return 0;
}
