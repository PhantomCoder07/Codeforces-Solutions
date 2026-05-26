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
        bool odd=false,even=false;
        for (int i=1; i<=n; i++)
        {
            if (i%2)
                odd|=((s[i-1]-'0')%2);
            else
                even|=((s[i-1]-'0')%2==0);
        }
        if (n%2)
            cout<<(odd?1:2)<<endl;
        else
            cout<<(even?2:1)<<endl;
    }
    return 0;
}
