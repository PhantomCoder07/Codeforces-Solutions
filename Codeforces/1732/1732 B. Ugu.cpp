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
        int ind=-1,c=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
            {
                ind=i;
                break;
            }
        }
        if (ind==-1)
        {
            cout<<0<<endl;
            continue;
        }
        for (int i=n-1; i>ind; i--)
        {
            if (s[i]!=s[i-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
