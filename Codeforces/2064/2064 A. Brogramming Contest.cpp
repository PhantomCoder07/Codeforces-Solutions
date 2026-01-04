#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]!=s[i+1])
                c++;
        }
        if (s[0]=='1')
            c++;
        cout<<c-1<<endl;
    }
    return 0;
}
