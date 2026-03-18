#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int x=-1,y=-1;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='G' && x==-1)
            x=i;
        if (s[i]=='T' && y==-1)
            y=i;
    }
    bool ans=false;
    if (x<y)
    {
        for (int i=x; i<=y; i+=k)
        {
            if (s[i]=='T')
            {
                ans=true;
                break;
            }
            if (s[i]=='#')
                break;
        }
    }
    else
    {
        for (int i=y; i<=x; i+=k)
        {
            if (s[i]=='G')
            {
                ans=true;
                break;
            }
            if (s[i]=='#')
                break;
        }
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
