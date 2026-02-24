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
        string c="1";
        for (int i=1; i<n; i++)
        {
            if ('1'+s[i]!=c[i-1]+s[i-1])
                c+="1";
            else
                c+="0";
        }
        cout<<c<<endl;
    }
    return 0;
}
