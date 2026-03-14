#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int c=0;
        bool ans=true;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='A')
                c++;
            else
                c--;
            if (c<0)
                ans=false;
        }
        cout<<(ans && s[n-1]=='B'?"YES":"NO")<<endl;
    }
    return 0;
}
