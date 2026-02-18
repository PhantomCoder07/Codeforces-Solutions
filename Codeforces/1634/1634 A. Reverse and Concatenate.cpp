#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s,c;
        cin>>n>>k>>s;
        c=s;
        reverse(c.begin(),c.end());
        if (k==0)
            cout<<1<<endl;
        else if (c==s)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
