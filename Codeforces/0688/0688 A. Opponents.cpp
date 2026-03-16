#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<string> s(d);
    for (int i=0; i<d; i++)
        cin>>s[i];
    int c=0,ans=0;
    for (int i=0; i<d; i++)
    {
        int c0=0;
        for (int j=0; j<n; j++)
        {
            if (s[i][j]=='0')
                c0++;
        }
        if (c0==0)
        {
            ans=max(ans,c);
            c=0;
        }
        else
            c++;
    }
    ans=max(ans,c);
    cout<<ans<<endl;
    return 0;
}
