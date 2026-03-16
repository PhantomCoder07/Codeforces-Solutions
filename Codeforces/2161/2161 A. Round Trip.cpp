#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int r,x,d,n,c=0;
        string s;
        cin>>r>>x>>d>>n>>s;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1' || r<x)
            {
                c++;
                r=max(0,r-d);
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
