#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,ans=0;
    cin>>r>>c;
    string s[r];
    int a[r],b[c];
    for (int i=0; i<r; i++)
    {
        cin>>s[i];
    }
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (s[i][j]=='S')
            {
                a[i]=1;
                b[j]=1;
            }
        }
    }
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (a[i]==1 && b[j]==1)
                continue;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
