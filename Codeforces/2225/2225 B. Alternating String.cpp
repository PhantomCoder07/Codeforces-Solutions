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
        for (int i=0; i<n-1; i++)
        {
            if (s[i]==s[i+1])
                c++;
        }
        cout<<(c<3?"YES":"NO")<<endl;
    }
    return 0;
}
