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
        int a=0,b=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='A')
                a++;
            else
                b++;
        }
        if (s[n-1]=='A')
            cout<<'A'<<endl;
        else if (s[n-1]=='B')
            cout<<'B'<<endl;
        else
            cout<<'?'<<endl;
    }
    return 0;
}
