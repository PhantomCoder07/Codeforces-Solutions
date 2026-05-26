#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0,m=0;
        string s;
        cin>>n>>s;
        for (int i=0; i<n; i++)
            if ((s[i]-'0')%2)
                c++;
        if (c<2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for (int i=0; i<n; i++)
        {
            if ((s[i]-'0')%2)
            {
                cout<<s[i];
                m++;
            }
            if (m==2)
                break;
        }
        cout<<endl;
    }
    return 0;
}
