#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int n=a.length();
        bool ans=true;
        for (int i=0; i<n; i++)
        {
            if (c[i]==b[i] || c[i]==a[i])
                continue;
            ans=false;
        }
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
