#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string ans="";
        int sum=s[0]-'0';
        for (int i=1; i<n; i++)
        {
            if (s[i]=='0')
                ans+='+';
            else
            {
                if (sum==0)
                {
                    ans+='+';
                    sum+=1;
                }
                else
                {
                    ans+='-';
                    sum-=1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
