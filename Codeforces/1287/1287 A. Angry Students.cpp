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
        int m,k=0,c=0,mx=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='A' && s[i+1]!='A')
            {
                k=1;
                m=i;
                break;
            }
        }
        for (int i=m; i<n; i++)
        {
            if (s[i]=='A')
            {
                mx=max(mx,c);
                c=0;
            }
            else if (k==1)
                c++;
        }
        mx=max(mx,c);
        if (n==1 && s[0]=='P')
        {
            cout<<0<<endl;
            continue;
        }
        cout<<mx<<endl;
    }
    return 0;
}
