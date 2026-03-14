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
        int c=1,mx=0;
        for (int i=0; i<n-1; i++)
        {
            if (s[i]==s[i+1])
                c++;
            else
                c=1;
            mx=max(mx,c);
        }
        long long c0=count(s.begin(),s.end(),'0');
        long long c1=count(s.begin(),s.end(),'1');
        if (n==1)
            cout<<1<<endl;
        else
            cout<<max(1LL*mx*mx,c0*c1)<<endl;
    }
    return 0;
}
