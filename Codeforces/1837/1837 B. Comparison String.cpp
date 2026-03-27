#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=1,mx=0;
        string s;
        cin>>n>>s;
        for (int i=0; i<n-1; i++)
        {
            if (s[i]==s[i+1])
                c++;
            else
                c=1;
            mx=max(mx,c);
        }
        mx=max(mx,c);
        cout<<mx+1<<endl;
    }
    return 0;
}
