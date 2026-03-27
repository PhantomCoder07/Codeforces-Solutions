#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        for (int i=0; i<n; i++)
            for (int j=0; j<b; j++)
                s+=(char)('a'+j);
        for (int i=0; i<n; i++)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
