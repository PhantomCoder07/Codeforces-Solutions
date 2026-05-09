#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s,r;
        cin>>n>>k>>s;
        r=s;
        reverse(r.begin(),r.end());
        if (k==0)
            cout<<(r>s?"YES":"NO")<<endl;
        else
        {
            int c=count(s.begin(),s.end(),s[0]);
            cout<<(c==n?"NO":"YES")<<endl;
        }
    }
    return 0;
}
